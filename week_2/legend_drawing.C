{
    auto c3 = new TCanvas("c3", "c3", 600, 400);

    auto mg = new TMultiGraph("mg", "mg");

    const Int_t size = 10;

    double px[size];
    double py1[size];
    double py2[size];
    double py3[size];

    for (int i=0; i < size; i++) {
        px[i] = i,
        py1[i] = size - i;
        py2[i] = size - 0.5 * i;
        py3[i] = size - 0.6 * i;  
    }

    auto gr1 = new TGraph( size, px, py1);
    gr1->SetName("gr1");
    gr1->SetTitle("graph 1");
    gr1->SetMarkerStyle(21);
    gr1->SetDrawOption("AP");
    gr1->SetLineColor(2);
    gr1->SetLineWidth(4);
    gr1->SetFillStyle(0);

    auto gr2 = new TGraph( size, px, py2);
    gr2->SetName("gr2");
    gr2->SetTitle("graph2"),
    gr2->SetMarkerStyle(22);
    gr2->SetDrawOption("P");
    gr2->SetLineColor(3);
    gr2->SetLineWidth(4);
    gr2->SetFillStyle(0);

    auto gr3 = new TGraph( size, px, py3);
    gr3->SetName("gr3");
    gr3->SetTitle("graph3");
    gr3->SetMarkerStyle(23);
    gr3->SetLineColor(4);
    gr3->SetLineWidth(4);
    gr3->SetFillStyle(0);

    mg->Add(gr1);
    mg->Add(gr2);
    
    gr3->Draw("ALP");
    mg->Draw("LP");
    c3->BuildLegend();
}
