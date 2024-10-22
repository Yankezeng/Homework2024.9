#include<stdio.h>
#include<math.h>

int main() {

	// 02 - 01 - 01 sizeof运算符
        /*printf("%lu ", sizeof(double));
        printf("%lu ", sizeof(long double));
        printf("%lu ", sizeof(long long));
        printf("%lu ", sizeof(3.14F));
        printf("%lu ", sizeof(3.14));
        printf("%lu ", sizeof(521));
        printf("%lu", sizeof(521LL));*/

    //02-01-01-拓展 sizeof运算符应用
        /*printf("% lu ", sizeof(long double));
        printf("% lu ", sizeof(3.14L));
        printf("% lu", sizeof(314LL));*/

    //02-01-03-拓展 输出常量数据训练
        /*printf("%d %#o %#x\n", 2049, 2049, 2049);
        printf("%lf\n", 3.14159265 * 2 * 2);
        printf("%s", "我学习我快乐");*/

    //02-01-04 明明父亲的工资
        /*double money;
        int day;
        double fact;
        scanf("%lf%d", &money, &day);
        fact = money * day - money * day * 0.15;
        printf("%.2lf\n", fact);*/

    //02-01-04拓展 鸡兔同笼
        /*int head, foot, tu, ji;
        scanf("%d%d", &head, &foot);
        ji = (4 * head - foot) / 2;
        tu = head - ji;
        printf("%d %d", ji, tu);*/
    
    //02-01-04-拓展2(思政) 你给我20万
        /*double kg, money, fact;
        scanf("%lf%lf", &kg, &money);
        fact = money * 10000 / (kg * 2);
        printf("%.2lf", fact);*/

    //02-02-02 苹果装盘
        /*int a, b;
        scanf("%d", &a);
        if (a % 2 == 1) {
            b = (a + 1) / 2;
        }
        else if (a % 2 == 0) {
            b = a / 2;
        }
        printf("%d", b);*/

    //02-02-02-拓展 球的表面积和体积
        /*double r, R;
        double S, V;
        scanf("%lf", &r);
        R = pow(r, 2);
        S = 4 * 3.14159265 * R;
        V = (4.0 / 3.0) * 3.14159265 * r * R;
        printf("%.2lf %.2lf", S, V);*/

    //02-02-04 人体发热
        /*double tempreture;
        scanf("%lf", &tempreture);
        if (tempreture <= 37.0) {
            printf("no");
        }
        else {
            printf("have a fever");
        }*/
        
    //02 - 02 - 04 - 拓展1 两个数中的最大值
        /*int a, b;
        scanf("%d%d", &a, &b);
        if (a <= b) {
            printf("%d", b);
        }
        else {
            printf("%d", a);
        }*/

    //02-02-04-拓展2 三个数中的最大值
        /*int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a <= b && a <= c && b <= c) {
            printf("%d", c);
        }
        else if (a <= b && a <= c && c <= b) {
            printf("%d", b);
        }
        else if (a >= b && a >= c) {
            printf("%d", a);
        }*/

    //02-02-04-拓展3 四个数中的最大值
        /*int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a >= b && a >= c && a >= d) {
            printf("%d", a);
        }
        else if (b >= a && b >= c && b >= d) {
            printf("%d", b);
        }
        else if (c >= a && c >= b && c >= d) {
            printf("%d", a);
        }
        else {
            printf("%d", d);
        }*/

    //02-02-05 闰年
        /*int year;
        scanf("%d", &year);
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            printf("Leap Year");
        }
        else {
            printf("Not Leap Year");
        };*/

    //02-02-05-拓展01 2100年的日期合法性
        /*int month, day;
        scanf("%d%d",&month,&day);
        if (month == 2 && day <=28 || month == 1 && day <= 31  || month == 3 && day <= 31 || month == 4 && day <= 30 || month == 5 && day <= 31 || month == 6 && day <= 30 || month == 7 && day <= 31 || month == 8 && day <= 31 || month == 9 && day <= 30 || month == 10 && day <= 31 || month == 11 && day <= 30 || month == 12 && day <= 31) {
            printf("YES");
        }
        else {
            printf("NO");
        };*/
        
    //02-02-05-拓展02 日期合法性
    /*int year,month,day,a;
    scanf("%d%d%d", &year,&month,&day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        a = 1;
    }
    else {
        a = 2;
    };
    if (a == 2 && month == 2 && day <= 28 || a ==1 && month == 2 && day <= 29 || month == 1 && day <= 31 || month == 3 && day <= 31 || month == 4 && day <= 30 || month == 5 && day <= 31 || month == 6 && day <= 30 || month == 7 && day <= 31 || month == 8 && day <= 31 || month == 9 && day <= 30 || month == 10 && day <= 31 || month == 11 && day <= 30 || month == 12 && day <= 31) {
        printf("YES");
    }
    else {
        printf("NO");
    };*/

    //02 - 02 - 07 - 拓展 输出函数值
        /*double x,F;  
        scanf("%lf",&x);
        F = exp(2 * x) + sin(pow(x, 3.5)) + log(x) - 1;
        printf("%.6lf",F);*/

    //02-02-08-拓展2 石头剪子布(2)
    /*int a, b;
    scanf("%d%d", &a, &b);
    if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
        printf("You Win!");
    }
    else if (a == 1 && b == 1 || a == 2 && b == 2 || a == 3 && b == 3) {
        printf("Same!");
    }
    else {
        printf("Computer Win!");
    }*/
    
    //02-02-09-拓展 三阶行列式
    /*int a, b, c, d, e, f, g, h, i,j,k,fact;
    scanf("%d%d%d\n", &a, &b,& c);
    scanf("%d%d%d\n", &d, &e, &f);
    scanf("%d%d%d", &g, &h, &i);
    j = a * e * i + b * f * g + c * d * h;
    k = c * e * g + a * f * h + b * d * i;
    fact = j - k;
    printf("%d",fact);*/

    //02-02-10 计算并联电阻的阻值
    /*double R, j, k;
    scanf("%lf %lf", &j, &k);
    R = pow(pow(j, -1) + pow(k, -1), -1);
    printf("%.2lf", R);*/

    //02-02-10-拓展 后N天
    /*int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    if (c % 7 == 1) {
        printf("1");
    }
    else if (c % 7 == 2) {
        printf("2");
    }
    else if (c % 7 == 3) {
        printf("3");
    }
    else if (c % 7 == 4) {
        printf("4");
    }
    else if (c % 7 == 5) {
        printf("5");
    }
    else if (c % 7 == 6) {
        printf("6");
    }
    else if (c % 7 == 0) {
        printf("7");
    }*/

    //7-38 逆序后四位
    /*int a, b, c, d, e, fact;
    scanf("%d", &a);
    b = a % 10;
    c = a % 100 / 10;
    d = a % 1000 / 100;
    e = a % 10000 / 1000;
    fact = b * 1000 + c * 100 + d * 10 + e * 1;
    printf("%d", fact);*/

    //7-40 捣蛋的乘法
    /*int a, b, A, B, C, D, E, F;
    scanf("%d*%d", &a, &b);
    A = a % 1000 / 100;
    B = a % 10;
    C = b % 10000 / 1000;
    D = b % 100 / 10;
    E = A * 10 + B * 1;
    F = C * 10 + D * 1;
    printf("%d*%d=%d", E, F, E* F);*/

    //7-41 日期格式强迫症
    /* int y, m, d;
    char a, b;
    scanf("%d%c%d%c%d", &y, &a, &m, &b, &d);
    if (y < 100) {
        printf("19%d-%02d-%02d", y, m, d);
    }
    else {
        printf("%d-%02d-%02d", y, m, d);
    }*/

    //7-42 大米装袋（需要math.h）ceil函数向上取整
    /*double a, b, c, d, sum, x;
    int fact;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &x);
    sum = a + b + c;
    fact = ceil(sum / x);
    printf("%d", fact);*/

    //7-43 简单算式 条件运算符
    /*int a, b;
    char m;
    scanf("%d %c %d", &a, &m, &b);
    m == '+' ? printf("%d", a + b) : (m == '-') ? printf("%d", a - b) : printf("error!");*/

    //7-44 辛巳蛇宝男
    /*char ID[20];
    int gender, year, month, day;
    scanf("%18s", ID);
    gender = ID[16] - '0';
    year = (ID[6] - '0') * 1000 + (ID[7] - '0') * 100 + (ID[8] - '0') * 10 + (ID[9] - '0');
    month = (ID[10] - '0') * 10 + (ID[11] - '0');
    day = (ID[12] - '0') * 10 + (ID[13] - '0');
    ((year == 2001 && month == 1 && day >= 24) || (year == 2001 && month > 1 && day <= 31) || (year == 2002 && month == 1 && day <= 31) || (year == 2002 && month == 2 && day <= 11)) && (gender % 2 == 1) ? printf("YES") : printf("NO");*/
    
    //7-45 X在哪里
    /*int hour, minute, second;
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("%s", ((hour < 6 || hour >= 18) && (minute > 0 || second > 0)) ? "dormitory" : (((hour >= 6 && hour < 7) || (hour >= 12 && hour < 13) || (hour >= 17 && hour < 18)) && (minute > 0 || second > 0)) ? "canteen" : ((hour == 6 || hour == 7 || hour == 12 || hour == 13 || hour == 17 || hour == 18) && (minute == 0 && second == 0)) ? "on the way" : "classroom");*/
    
    







































        return 0;
}