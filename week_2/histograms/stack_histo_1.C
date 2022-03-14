{
    THStack *hs = new THStack("hs", "");
    TH1F *h1 = new TH1F("h1", "test hstack", 10, -4, 4);
    h1->FillRandom("gaus", 20000);
    h1->SetFillColor(kRed);
    hs->Add(h1);
    TH1F *h2 = new TH1F("h2", "test hstack", 10, -4, 4);
    h2->FillRandom("gaus", 15000);
    h2->SetFillColor(kBlue);
    hs->Add(h2);
    TH1F *h3 = new TH1F("h3", "test hstack", 10, -4, 4);
    h3->FillRandom("gaus", 10000);
    h3->SetFillColor(kGreen);
    hs->Add(h3);
    TCanvas *cs = new TCanvas("cs", "cs", 10, 10, 1600, 1000);
    TText T; T.SetTextAlign(21); 
    Double_t font = T.GetTextFont();
    cs->Divide(2,2);
    cs->cd(1); hs->Draw(); T.DrawTextNDC(.5, .95, "Default drawing option");
    cs->cd(2); hs->Draw("nostack"); T.DrawTextNDC(.5, .95, "Option\"nostack\"");
    cs->cd(3); hs->Draw("nostackb"); T.DrawTextNDC(.5, .95, "Option\"nostackb\"");
    cs->cd(4); hs->Draw("lego1"); T.DrawTextNDC(.5, .95, "Option \"lego1\"");
    cout << font << endl;
    return cs;

}
