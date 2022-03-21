#include "TH2F.h"
#include "TRandom.h"
#include "TCanvas.h"

void NormalizeHistogram()
{
    std::array<double, 6> binsx{0, 5, 10, 20, 50, 100};
    TH1F *orig = new TH1F("orig", "Original histogram before normalization",
        binsx.size() - 1, &binsx[0]);
        
    gStyle->SetTitleFontSize(0.06);

    TRandom2 rand;

    //Filling histogram with random entries
    for (int i=0; i<100'00;++i) {
        double r = rand.Rndm() *100;
        orig->Fill(r);
    }

    TH1F *norm = (TH1F *)orig->Clone("norm");
    norm->SetTitle("Normalized Histogram");

    // Normalizing the Histogram by scaling by 1 / the integram and taking width into account
    norm->Scale(1. / norm->Integral(), "width");

    //Drawing everything
    TCanvas *c1 = new TCanvas("c1", "Histogram Normalization", 700, 900);
    c1->Divide(1, 2);

    c1->cd(1);
    orig->Draw();
    c1->cd(2);
    norm->Draw();
}