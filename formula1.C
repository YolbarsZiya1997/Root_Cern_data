{
    c1 = new TCanvas("c1", "My ROOT Plots", 1600, 700);
    // here we are printting them side by side but not on top of each other
    c1->Divide(3,1);

    c1->cd(1);
    f1 = new TF1("f1", "sin(x)", 0, 5);
    f1->SetLineColor(kAzure+10);
    f1->SetTitle("My Function; Time; Money");
    f1->Draw();

    c1->cd(2);
    f2 = new TF1("f2", "cos(x)", 0, 5);
    f2->SetLineColor(kRed);
    f2->SetTitle("My other Function; X (Fathoms); Y (furlongs)");
    // use f2->Draw("SAME") if your want two plots on top of each other
    f2->Draw();

    c1->cd(3);
    f3 = new TF2("f3", "10*cos(x)*sin(y)", -3, 3, 0, 10);
    f3->SetTitle("Surface; x; y");
    f3->Draw("surf2");

}