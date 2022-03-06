// Example of reading data file and plotting
{
    g = new TGraph("data_set.txt");
    g->SetMarkerStyle(45);
    g->SetLineColor(kAzure);
    g->SetTitle("Data Plot with TGRAPH;GW;MS");
    g->Draw("ALP");
}