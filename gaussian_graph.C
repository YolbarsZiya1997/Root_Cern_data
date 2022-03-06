// Example of Gaussian Graph

{
    g = new TGraph();
    for (int i=0; i<1000; i++) g->SetPoint(i, gRandom->Gaus(5,1), gRandom->Gaus(0,2))
}