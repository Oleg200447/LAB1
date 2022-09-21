
#include <stdio.h>

int MonthFunction(const char month1[], const char month2[])
{
    for (int i = 0; i < 10; i++)
    {
        
        if (month1[i] != month2[i])
            return 0;
        if (month1[i] == '\0')
            break;
    }
    
    return 1;
}
    
int main()
{
    char month1[10]={ '\0' };
    int year=0;
    int x = 0;
    printf("Input month\n");
    scanf_s("%s", &month1,10);
    if (MonthFunction(month1, "January") == 1)
    {
        printf("31 days");
        x++;
    }

    if (MonthFunction(month1, "February") == 1)
    {
        x++;
        printf("What year is now?\n");
        scanf_s("%i", &year);
        if (year % 4 == 0)
            printf("29 days");
        else
            printf("28 days");
    }
      

    if (MonthFunction(month1, "March") == 1)
    {
        printf("31 days");
        x++;
    }

    if (MonthFunction(month1, "April") == 1)
    {
        printf("30 days");
        x++;
    }

    if (MonthFunction(month1, "May") == 1)
    {
        printf("31 days");
        x++;
    }

    if (MonthFunction(month1, "June") == 1)
    {
        printf("30 days");
        x++;
    }
    if (MonthFunction(month1, "July") == 1)
    {
        printf("31 days");
        x++;
    }
    if (MonthFunction(month1, "August") == 1)
    {
        printf("31 days");
        x++;
    }
    if (MonthFunction(month1, "September") == 1)
    {
        printf("30 days");
        x++;
    }
    if (MonthFunction(month1, "October") == 1)
    {
        printf("31 days");
        x++;
    }
    if (MonthFunction(month1, "November") == 1)
    {
        printf("30 days");
        x++;
    }
    if (MonthFunction(month1, "December") == 1)
    {
        printf("31 days");
        x++;
    }
    if (x== 0)

        printf("There isnt month like this");
    /*char month[9] = "";
    char j[9] = "January";
    char d[9] = "December";
    char f[9] = "February";
    char m[9] = "March";
    char a[9] = "April";
    char ma[9] = "May";
    char jun[9] = "June";
    char jul[9] = "Jule";
    char aug[9] = "August";
    char s[10] = "September";
    char o[9] = "October";
    char n[9] = "November";
    printf("Input month\n");
    scanf_s("%s",month,10); 
    int jan=0,fab=0,mar=0,apr=0,may=0,june=0,july=0,auge=0,sept=0, oct=0, nov=0, dec=0, year;
    for (int i = 0; i < 7; i++)
        if (month[i] == j[i])
        {            
            jan++;         
        }
    if (jan == 7)
        printf("31");
    for (int i = 0; i < 8; i++)
        if (month[i] == d[i])
        {
            dec++;
        }
    if (dec == 8)
        printf("31");
    for (int i = 0; i < 8; i++)
        if (month[i] == f[i])
        {
            fab++;
        }
    if (fab == 8)
    {
        printf("What year is now?\n");
        scanf_s("%d", &year);
        if ( year %4 == 0)
            printf("29");
       
    }  
    else printf("28");
     for (int i = 0; i < 5; i++)
            if (month[i] == m[i])
            {
                mar++;
            }
        if (mar == 5)
            printf("31");
        for (int i = 0; i < 5; i++)
            if (month[i] == a[i])
            {
                apr++;
            }
        if (apr == 5)
            printf("30");
       for (int i = 0; i < 3; i++)
            if (month[i] == ma[i])
            {
                may++;
            }
        if (may == 3)
            printf("31");
        for (int i = 0; i < 4; i++)
            if (month[i] == jun[i])
            {
                june++;
            }
        if (june == 4)
            printf("30");
        for (int i = 0; i < 4; i++)
            if (month[i] == jul[i])
            {
                july++;
            }
        if (july == 4)
            printf("31");

        for (int i = 0; i < 6; i++)
            if (month[i] == aug[i])
            {
                auge++;
            }
        if (auge == 6)
            printf("31");
          for (int i = 0; i < 9; i++)
                if (month[i] == s[i])
                {
                    sept++;
                }
        if (sept == 9)
            printf("30");

        for (int i = 0; i < 7; i++)
            if (month[i] == o[i])
            {
                oct++;
            }
        if (oct == 7)
            printf("31");

        for (int i = 0; i < 8; i++)
            if (month[i] == n[i])
            {
                nov++;
            }
        if (nov == 8)
            printf("31");
            */


return 0;
     
 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
