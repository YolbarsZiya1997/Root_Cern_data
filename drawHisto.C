void drawHisto(){
    
    //create empty histogram
    TH1D * h = new TH1D("histo1", "", 160, -20, 20);

    //fill with Gaus distribution
    h->FillRandom("gaus", 50000);
    h->Draw();
}