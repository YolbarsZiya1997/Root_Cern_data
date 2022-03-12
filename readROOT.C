void readROOT() {

    TFile *f = new TFile("histo1.root");

    TH1D * h;
    h = (TH1D*)f->Get("histo1");

    h->Draw();
}