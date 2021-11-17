#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<process.h>
void main()
{
    intch;
    Char
    itemlist[8][10] = {"SWEET", "BREAD", "BUTTER", "TEA", "COFFEE", "CAKE", "JUICE", "BISCUIT"};
    intmin_sup = 6;
    int 
    item[25][8] = {0,1,1,0,0,0,1,0,0,1,1,0,1,1,0,0,1,0,0,1,0,0,0,1,0,1,1,0,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,0,0,0,1,0,0,1,0,0,1,1,0,0,0,1,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1,0,0,0,0,0,1,1,0,0,1,1,0,1,0,0,0,1,1,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,1,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,1,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0};

    clrscr();
    void transaction(int item[25][8]);
    void transaction1(int item[25][8]);
    void candidate1set(int item[25][8], char itemlist[8][10]);
    void prune1set(int item[25][8],intmin_sup,charitemlist[8][10]);
    void candidate2set(int item[25][8], char itemlist[8][10]);
    void prune2set(int item[25][8],intmin_sup,charitemlist[8][10]);
    void candidate3set(int item[25][8],char itemlist[8][10]);
    void prune3set(int item[25][8],intmin_sup,charitemlist[8][10]);
    void candidate4set(int item{25}[8],intmin_sup,charitemlist[8][10]);
    do
    {
        clrscr();
        cout<<"\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 1!!!!!!!!!!!!!!!!!!!";
        cout<<"\n\n------APRIORI ALGORITHM-------";
        cout<<"\n\n\t1.TRANSACTION TABLE";
        cout<<"\n\n\t2.CANDIDATE SET FOR 1-ITEMSET";
        cout<<"\n\n\t3.1-item FREQUENT SET";
        cout<<"\n\n\t4.CANDIDATE SET FOR 2-ITEMSET";
        cout<<"\n\n\t5.2-item FREQUENT SET";
        cout<<"\n\n\t6.CANDIDATE SET FOR 3-ITEMSET";
        cout<<"\n\n\t7.3-item FREQUENT SET";
        cot<<"\n\n\t8.CANDIDATE SET FOR 4-ITEMSET";
        cout<<"\n\n\t9.ALL THE FREQUENT ITEMLIST";
        cout<<"\n\n\t10.EXIT";
        cout<<"\n\n\tENTER YOU CHOICE";
        cout<<"\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 2!!!!!!!!!!!!!!!!!!";
            cout<<"\n\n";
            transaction(item);
            transaction1(item);
            break;

            case 2:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 3!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n\n-------------CANDIDATE SET FOR 1-ITEMSET----------";
            cout<<"\n"<<setew(29)<<"C1";
            cout<<"\n\n\tITEMSET\t\t\t\t\tSUPPORT";
            cout<<"\n\t------\t\t\t\t\t--------";
            candidate1set(item,itemlist);
            break;

            case 3:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 4!!!!!!!!!!!!!!!!!!";
            cout<<"\n\n";
            cout<<setw(20)<<"\n\n-------------1-itemset FREQUENT SET----------";
            cout<<"\n"<<setew(29)<<"L1";
            cout<<"\n\n\tFREQUENT ITEMSET\t\t\t\t\tSUPPORT";
            cout<<"\n\t----------------\t\t\t\t\t----------";
            cout<<"\n";
            prune1set(item,min_sup,itemlist);
            break;

            case 4:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 5!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n-----------CANDIDATE SET FOR 2-ITEMSET----------";
            cout<<"\n"<<setw(29)<<"C1";
            cout<<"\n\n\tITEMSET\t\t\t\t\t\tSUPPORT";
            cout<<"\n\t------------\t\t\t\t\t\t\t----------";
            candidate2set(item,itemlist);
            break;

            case 5:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 6!!!!!!!!!!!!!!!!!!";
            cout<<"\n\n";
            cout<<setw(20)<<"\n\n-------------2-itemset FREQUENT SET----------";
            cout<<"\n"<<setew(29)<<"L2";
            cout<<"\n\n\tFREQUENT ITEMSET\t\t\t\t\tSUPPORT";
            cout<<"\n\t---------\t\t\t\t\t----------";
            cout<<"\n";
            prune2set(item,min_sup,itemlist);
            break;

            case 6:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 7!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n-----------CANDIDATE SET FOR 3-ITEMSET----------";
            cout<<"\n"<<setw(29)<<"C3";
            cout<<"\n\n\tITEMSET\t\t\t\t\t\tSUPPORT";
            cout<<"\n\t---------\t\t\t\t\t\t\t---------";
            cout<<"\n";
            candidate3set(item,itemlist);
            break;

            case 7:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 8!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n\n-------------3-itemset FREQUENT SET----------";
            cout<<"\n"<<setw(29)<<"L3";
            cout<<"\n\n\tFREQUENT ITEMSET\t\t\t\t\tSUPPORT";
            cout<<"\n\t---------\t\t\t\t\t----------";
            prune3set(item,min_sup,itemlist);
            break;

            case 8:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 9!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n-----------CANDIDATE SET FOR 4-ITEMSET----------";
            cout<<"\n"<<setw(29)<<"C4";
            cout<<"\n\n\n\n\n\n";
            candidate4set(item,min_sup,itemlist);
            break;

            case 9:
            cout<<\n\n!!!!!!!!!!!!!!!!!!!!OUTPUT 10!!!!!!!!!!!!!!!!!!";
            cout<<setw(20)<<"\n\n-------------FREQUENT ITEMSET----------";
            cout<<"\n"<<setw(29)<<"L";
            cout<<"\n\n\tFREQUENT ITEMSET\t\t\t\t\tSUPPORT\n\n";
            cout<<"\n\t---------\t\t\t\t\t----------";
            prune1set(item,min_sup,itemlist);
            prune2set(item,min_sup,itemlist);
            prune3set(item,min_sup,itemlist);
            break;

            case 10:
            exit(0);

            default:
            cout<<WRONG CHOICE!!\n";
            break;
        }
        cout<<"\nPress a key to continue...\n";
    }
    while(ch>=1 && c<=10);
    getch();
}

void transaction(int item[25][8])
{
    int i,j;
    cout<<"SWEET\tBREAD\tBUTTER\tTEA\tCOFFEE\tCAKE\tJUICE\tBISCUIT\n";
    cout<<"-------\t------\t-----\t------\t-----\t------\t-------\t-------\n";
    for(i = 0; i < 20; i++)
    {
        for(j = 0; j < 8; j++)
        cout<<iem[i][j]<<"\t";
        cout<<"\n\n";
    }
    getch();
}

void transaction1(int item[25][8]);
{
    int i,j;
    for(i = 20; i < 25; i++)
    {
        for(j = 0; j < 8; j++)
        cout<<item[i][j]<<'\t';
        cout<< "\n\n";
    }
    getch();
}

void candidate1set(int item[25][8], char itemlist[8][10])
{
    int i,j,sum = 0, nt[8];
    for(j = 0; j < 8; j++)
    {
        for(i = 0; i < 25; i++)
        {
            if(item[i][j] == 1)
            sum = sum + 1;
        }
        cout<<"\n\n\n\t"<<itemlist[j]<<"\t\t\t\t\t\t\t"<<sum;
        nt[j] = sum;
        sum = 0;
    }
    getch();
    
}
void prune1set(int item[25][8], intmin_sup,charitemlist[8][10])
{
    int i,j;
    int t1, q[8], nt[8], sum = 0;
    for(j = 0; j < 8; j++)
    {
        for(i = 0; i < 25; i++)
        {
            if(item[i][j] = 1)
            sum = sum + 1;
        }
        nt[j] = sum;
        sum = 0;
    }
    for(j = 0; j < 8; j++)
    {
        if(nt[j] >= min_sup)
        q[j] = 1;
        else
        q[j] = 0;
        if(q[j] == 1)
        {
            cout<<"\n\n\n\t"<< itemlist[j]<<"\t\t\t\t\t\t\t"<<nt[j];
        }
    }
    getch();
}

void candidate2set(int item[25][8], char itemlist[8][10])
{
    int i,j,sum = 0,q[8],t1;
    int nt[8], ntt[8], nt1[8][8];
    for(j = 0; j < 8; j++)
    {
        for(i = 0; i < 25; i++)
        {
            if(item[i][j] == 1)
            sum = sum + 1; 
        }
        nt[j]  = sum;
        sum = 0;
    }
    for(j = 0; j < 8; j++)
    {
        if(nt[j] > 0)
        q[j] = 1;
        else
        q[j] = 0;
        if(q[j] == 1)
        {
            t1++;
        }
    }
    for(i = 0; i < 25; i++)
    for(j = 0; j < 8; j++)
    {
        if(q[j] == 0)
        {
            item[i][j] = 0;
        }
    }
    for(j = 0; j < 8; j++)
    {
        for(int m = j+1; m < 8; m++)
        {
            for(i = 0; i < 25; i++)
            {
                if((item[i][j] == 1) && (item[i][m] == 1))
                {
                    sum = sum +1;
                    nt1[j][m] = nt1[j][m]+1;
                }
            }
            if(sum > 0)
            cout<<"\n\n\n\t{"<< itemlist[j]<<" , "<< itemlist[m]<<"}\t\t\t\t\t\t\t"<< sum;
            ntt[m] = sum;
            sum  = 0;
        }
    }
    getch();
}
void prune2set(int item[25][8], intmin_sup,charitemlist[8][10])
{
    int i, j, sum=0;
    for(j = 0; j < 8; j++)
    {
        for(int m = j+1; m < 8; m++)
        {
            for(i = 0; i < 25; i++)
            {
                if(item[i][j] == 1) && 9item[i][m] == 1))
                {
                    sum = sum + 1;
                }
            }
            if(sum >= min_sup)
            cout<<"\n\n\n\t{"<<itemlist[j]<<"&"<<itemlist[m]<<"}"\t\t\t\t\t\t"<<sum;
            sum = 0;
        }
    }
    getch();
}
void candidate3set(int item[25][8],char itemlist[8][10])
{
    int i, j, m, k, sum = 0;
    int n3[25][8];
    for(j = 0; j < 8; j++)
    {
        for(int m = j+1; m < 8; m++)
        {
            for(int k = m+1; k < 8; k++)
            {
                for(i = 0; i < 25; i++)
                {
                    if((item[i][j]==1)&&(item[i][j]==1)&&(item[i][k]==1))
                    {
                        sum = sum + 1;
                        
                    }
                }
                if(sum > 0)
                cout<<"\n\n\n\n\t{"<<itemlist[j]<<"&"<<itemlist[m]<<"&"<<itemlist[k]<<"}\t\t\t\t\t\t"<<sum;
                sum = 0;
            }
        }
    }
    getch();
}
void prune3set(int item[25][8], intmin_sup,charitemlist[8][10])
{
    int i,j,k,m,sum = 0;
    int n3[25][8];
    for(j = 0; j < 8; j++)
    {
        for(int m =j+1; m < 8; m++)
        {
            for(int k = m+1; k < 8; k++)
            {
                for(i = 0; i < 25; i++)
                {
                    if((item[i][j]==1)&&(item[i][m]==1)&&(item[i][k]==1))
                    {
                        sum = sum + 1;
                    }
                }
                if(sum >= min_sup)
                cout<<"\n\n\n\n\t{"<<itemlist[j]<<"&"<<itemlist[m]"&"<<itemlist[k]<<"}\t\t\t\t\t"<<sum;
                sum = 0;
            }
        }
    }
    getch();
}
void candidate4set(int item[25][8], intmin_sup, cahritemlist[8][10])
{
    int i,j,m,k,sum = 0;
    int n3[25][8];
    for(j = 0; j < 8; j++)
    {
        for(int m  = j+1; m < 8; m++)
        {
            for(int k = m+1; k < 8; k++)
            {
                for(i = 0; i < 25; i++)
                {
                    if((item[i][j]==1)&&(item[i][m]==1)&&(item[i][k]==1))&&(item[i][k+1]==1))
                    {
                        sum = sum+1;
                    }
                }
                if(sum > min_sup)
                cout<<"\n\t{"<<itemlist[j]<<"&"<<itemlist[m]"&"<<itemlist[m+2]<<"&"<<itemlist[k+1]<<"}\t\t\t"<<sum;
                sum  =  0;
            }
        }
    }
    cout<<"\n\n\n\n\t\t\n\n No 4-itemlist Candidate Generated";
    getch();
}