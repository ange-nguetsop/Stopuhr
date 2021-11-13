// Clock.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#pragma warning (disable: 4996)

void main(void)
{

	int h=0, m=0, s=0;
	int i = 0;

	printf("Anfangswerte eingeben:\n ");
	printf("Uhr:> ");
	scanf("%i", &h);
    if (h != '\n') while (getchar() != '\n');
	printf("\nMinute:> ");
	scanf("%i", &m);
	while (getchar() != '\n');
	printf("\nSekunde:> ");
	scanf("%i", &s);
	while (getchar() != '\n');

	if (h > 24 || m > 59 || s > 59)
	{
		printf("ERROR\n");
	}
	else
	{

		while (1) // Boucle infinie
		{
			if (s < 59)
				s = s + 1;
			else
			{
				s = 0;
				m = m + 1;

				if (m > 59)
				{
					m = 0;
					h = h + 1;
					if (h > 24)
					{
						h = 0;
						m = 0;
						s = 0;

					}
				}
			}

			printf("\n\n\nStopuhr:\n%02i:%02i:%02i", h, m, s);
			Sleep(1000);
			system("cls");


		}
	}
	
}