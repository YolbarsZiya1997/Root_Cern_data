#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Mar  6 17:53:18 2022) by ROOT version 6.26/00
   TCanvas *c1 = new TCanvas("c1", "c1",10,59,700,500);
   c1->Range(-0.625,-1.375529,5.625,1.380599);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TF1 *f11 = new TF1("f1","sin(x)",0,5, TF1::EAddToList::kDefault);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);
   f11->SetLineColor(2);
   f11->SetLineWidth(2);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetTitleOffset(1);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetTitleFont(42);
   f11->Draw("");
   
   TPaveText *pt = new TPaveText(0.4448711,0.9368947,0.5551289,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("sin(x)");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
