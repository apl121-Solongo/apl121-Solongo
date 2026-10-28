#include <studio.h>

int main(void)
{
    int i, coldDay = 0;
    double temp, fahrenheit, minTemp = 999;
    const char *category;
    const char *clothes;

    for (i = 1; i <= 7; i++)
    {
        printf("Odor %d - temp (C): ", i);
        scanf("%lf", &temp);

        while (temp < -50 || temp > 50)
        {
            printf("INVALID temperature, dahin oruul: ");
            scanf("%lf", &temp);
        }

        fahrenheit = temp * 9 / 5 + 32;

        if (temp >= 5)
        {
            category = "Dulaahan";
            clothes = "Nimgen hurem";
        }
        else if (temp >= 0)
        {
            category = "Seruuhen";
            clothes = "Tsamts, hurem";
        }
        else if (temp >= -10)
        {
            category = "Huiten";
            clothes = "Uwliin kurtik, malgai";
        }
        else if (temp >= -20)
        {
            category = "Mash huiten";
            clothes = "Zuzaan kurtik, beelii, oroolt";
        }
        else
        {
            category = "Tas huiten";
            clothes = "Dulaan dawhar huwtsas, malgai, beelii, nooson umd";
        }

        printf("%.1fC = %.1fF, %s, %s\n", temp, fahrenheit, category, clothes);

        if (temp < minTemp)
        {
            minTemp = temp;
            coldDay = i;
        }
    }

    printf("Hamgiin huiten udur: %d\n", coldDay);
    printf("Hamgiin baga temp: %.1fC\n", minTemp);

    return 0;
}