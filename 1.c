#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    printf("\n\t\t------Welcom To My Ticket Web-------\n");
    int n, m, d, p, b, c, t, g, z, q, l, l1, l3, l4, l5, l6, l7, l8, l9, k1, k2, k3, k4, k5, k6, k7, k8, k9, k10, k11, k12, r1, count;
    char a, e, x = '%';
    float r;

    printf("\n=> Please Press [ENTER] For Start <= ");
    getch();
    Beep(1000, 300);
    system("cls");
l2:
    printf("\n\t _____SELECT YOUR ROUTE______ \n\n We Have Currently 3 Routes Available \n\n 1. Indore To Mumbai - Press [M] \n\n 2. Indore To Delhi - Press [D] \n\n 3. Indore To Patna - Press [P]");
    printf("\n\n\tPlz Select Your Route ~ ");

    scanf("%c", &a);
    system("cls");
    switch (a)
    {
    case 'm':
    l1:
        printf("\n\tSelct your class \n\n 1. Bussiness class \n\n 2. Economy class ~ ");
        scanf("%d", &b);

        system("cls");
        switch (b)
        {
        case 1:
            printf("\n\n=> Your ticket price is 14620rs per person <=\n");
            printf("\nEnter the no. of person ~ ");
            scanf("%d", &c);
            int r1 = 14620 * c;
            system("cls");
            printf("\n~ Your Price Is %d And Member Is %d ~", r1, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g1:
            printf(" \n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)

            {
            case 1:
            l:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");

                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);
                    goto l;
                }

            k1:
            k7:
                printf("\nIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to mumbai";
                    r = (r1 * 5 / 100);
                    float res1 = r1 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = Bussiness class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d |\n\n", a);
                    Beep(1500, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:

                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n", a);
                    Beep(1500, 600);

                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(1000, 200);
                    goto k7;
                    break;
                }

                break;
            case 0:
                r++;
                goto k1;
                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g1;
                break;
            }

            break;
        case 2:
            printf("\n\n=> Your ticket price is 6620rs per person <=\n");
            printf("\nEnter no. of person ~ ");
            scanf("%d", &c);
            int r2 = 6620 * c;
            system("cls");
            printf("\n ~ Your Price Is %d And Member Is %d ~", r2, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g2:
            printf("\n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)
            {
            case 1:

            l3:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");
                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);

                    goto l3;
                }
            k8:
            k2:

                printf("\nIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to mumbai";
                    r = (r2 * 5 / 100);
                    float res1 = r2 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = economy class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d | \n\n", a);
                    Beep(1500, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:
                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(3000, 300);
                    goto k8;
                    break;
                }
                break;
            case 0:
                goto k2;

                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g2;
                break;
            }

            break;
        default:
            printf("\n\tWorong key plz try suggest key (1 or 2)\n\n");
            Beep(3000, 300);
            goto l1;
            break;
        }
        break;
    case 'd':
    l8:
        printf("\n\nSelct your class \n\n 1. Bussiness class \n\n 2. Economy class ~ ");
        scanf("%d", &b);
        system("cls");
        switch (b)
        {
        case 1:
            printf("\n\n=> your ticket price is 17720rs per person <=\n");
            printf("\nEnter no. of person ~ ");
            scanf("%d", &c);
            int r3 = 17790 * c;
            system("cls");
            printf("\n ~ Your Price Is %d And Member Is %d ~", r3, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g3:
            printf(" \n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)

            {
            case 1:

            l4:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");
                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);
                    goto l4;
                }
            k9:
            k3:
                printf("\nIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to delhi";
                    r = (r3 * 5 / 100);
                    float res1 = r3 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = Bussiness class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d | \n\n", a);
                    Beep(1500, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:
                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n", a);
                    Beep(1500, 600);
                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(3000, 300);
                    break;
                }

                break;
            case 0:
                goto k3;

                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g3;
                break;
            }
            break;
        case 2:
            printf("\n\n=> your ticket price is 8000rs per person <=\n");
            printf("\nEnter no. of person ~ ");
            scanf("%d", &c);
            int r4 = 8000 * c;
            system("cls");
            printf("\n~ your Price Is %d And Member Is %d ~", r4, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g4:
            printf(" \n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)

            {
            case 1:

            l5:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");
                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);
                    goto l5;
                }
            k10:
            k4:
                printf("\n\tIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to delhi";
                    r = (r4 * 5 / 100);
                    float res1 = r4 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = economy class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:
                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(3000, 300);
                    goto k10;
                    break;
                }
                break;
            case 0:
                goto k4;
                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g4;
                break;
            }

            break;
        default:
            printf("\n\tWorong key plz try suggest key (1 or 2)\n");
            Beep(3000, 300);
            goto l8;
            break;
        }
        break;
    case 'p':
    l9:
        printf("\n\nSelct your class \n\n 1. Bussiness class \n\n 2. Economy class ~ ");
        scanf("%d", &b);
        system("cls");
        switch (b)
        {
        case 1:
            printf("\n=> Your ticket price is 10720rs per person <=\n");
            printf("\nEnter no. of person ~ ");
            scanf("%d", &c);
            int r5 = 10720 * c;
            system("cls");
            printf("\n~ Your Price Is %d And Membr Is %d ~", r5, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g5:
            printf(" \n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)

            {
            case 1:

            l6:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");
                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);
                    goto l6;
                }
            k11:
            k5:
                printf("\nIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to patna";
                    r = (r5 * 5 / 100);
                    float res1 = r5 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = Bussiness class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:
                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(3000, 300);
                    goto k11;
                    break;
                }
                break;
            case 0:

                goto k5;
                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g5;
                break;
            }
            break;

        case 2:
            printf("\n=> Your ticket price is 13620rs per person <=\n");
            printf("\nEnter no. of person ~ ");
            scanf("%d", &c);
            int r6 = 13620 * c;
            system("cls");
            printf("\n~ Your Price Is %d And Member Is %d", r6, c);
            printf("\t\n\n------Apply Promocode Get Up To 5%c Off------", x);
        g6:
            printf(" \n\nFor Applying Press [1] or For Cancel Press [0] ~ ");
            scanf("%d", &z);
            system("cls");
            switch (z)

            {
            case 1:
            l7:
                printf("\nEnter the promocode (in number only) = ");
                scanf("%d", &d);
                system("cls");
                if (d <= 99999 && d >= 10000)
                {
                    printf("\n\t\t| VERIFIED  |\n");
                }

                else
                {
                    printf("\n\t\t| INVALID  |\n");
                    Beep(3000, 300);
                    goto l7;
                }
            k12:
            k6:
                printf("\nIf You Want Show Details Press [00] And For Cancle Press [11] ~ ");
                scanf("%d", &g);
                system("cls");
                switch (g)
                {
                case 00:
                    char a[] = "indore to patna";
                    r = (r6 * 5 / 100);
                    float res1 = r6 - r;
                    printf("\n\n\t______Details______");
                    printf("\n\nRout = %s", a);
                    printf("\nclass = economy class");
                    printf("\nMembers = %d", c);
                    printf("\nPrice = %.2f [P.A.]", res1);
                    printf("\n\n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(3000, 600);
                    break;
                    printf("\nPrice = %.2f [P.A.]", res1);
                case 11:
                    printf(" \n\t| Your ticket is conform ticket code is %d |\n\n ", a);
                    Beep(1500, 600);
                    break;
                default:
                    printf("\n\tWorong key plz try suggest key (00 or 11)\n\n");
                    Beep(1500, 300);
                    goto k12;
                    break;
                }
                break;
            case 0:
                goto k6;

                break;
            default:
                printf("\n\tWorong key plz try suggest key (1 or 0)\n\n");
                Beep(3000, 300);
                goto g6;
                break;
            }
            break;
        default:
            printf("\n\tWorong key plz try suggest key (1 or 2)\n");
            Beep(3000, 300);
            goto l8;
            break;
        }
        break;
        break;
    default:
        printf("\n\t Wrong key plz try suggest key (m , d and p)\n");
        Beep(3000, 300);
        goto l2;
        break;
    }
    return 1;
}
