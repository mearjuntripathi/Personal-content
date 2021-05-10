#include <bits/stdc++.h>
using namespace std;

int main()
{
    double mealCost;
    cin >> mealCost;

    int tipPercent;
    cin >> tipPercent;

    int taxPercent;
    cin >> taxPercent;
    
    double tip=mealCost*tipPercent/100;
    double tax=mealCost*taxPercent/100;
    int totalCost=(int)round(mealCost+tip+tax);
    cout<<totalCost;
    
    return 0;
}


//Other way to solve this problem
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double meal_cost,tip,tax,total;
    int tip_percent,tax_percent,totalCost;
    
    cin>> meal_cost >> tip_percent >> tax_percent;
    
    tip=(meal_cost * tip_percent)/100;

    tax=(meal_cost * tax_percent)/100;

    total = meal_cost + tip + tax;

    if(((int)(total+0.5))>((int)total))
        {
            totalCost = ((int)(total+0.5));
        }
    else
        totalCost = ((int)total);


    cout<<(int)totalCost<<endl;
    
    return 0;
}
*/
