#include <stdlib.h>
#include <stdio.h>

int addition(int nombre1, int nombre2);
int soustraction(int nombre1, int nombre2);
int multiplication(int nombre1, int nombre2);
int division(int nombre1, int nombre2);
void calcul(char** s, int choix);

int main() {

	int nombre1 = 0, nombre2 = 0, resultat = 0, choix = 0;
	char* result = { "uneaddition" };

	do {

		do {

			printf("\nQuel type de calcul voulez vous faire?\n\n1. +\n2. - \n3. * \n4. /\n5. Sortie du programme.\n");
			printf("-------------------------\n");
			scanf_s("%d", &choix);
			
			if (choix >= 6) {
				printf("\n--Veuillez saisir un choix valide--\n");
			}

		} while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5);

		if (choix == 5) {
			exit(0);
		}

		calcul(&result, choix);

		do {

			printf("Vous avez choisi une %s, quel est le premmier nombre?\n", result);
			scanf_s("%d", &nombre1);
			printf("le deuxieme nombre?\n");
			scanf_s("%d", &nombre2);

			if (nombre1 < -1000 || nombre1 > 1000 || nombre2 < -1000 || nombre2 > 1000) {
				printf("Saisie incorrect, veuillez à renseigner des nombre en -1000 et 1000\n");
			}

		} while (nombre1 < -1000 || nombre1 > 1000 || nombre2 < -1000 || nombre2 > 1000);

		if (choix == 1) {
			printf("\nLe resultat est %d.\n", addition(nombre1, nombre2));
		}
		else if (choix == 2) {
			printf("\nLe resultat est %d.\n", soustraction(nombre1, nombre2));
		}
		else if (choix == 3) {
			printf("\nLe resultat est %d.\n", multiplication(nombre1, nombre2));
		}
		else if (choix == 4) {
			printf("\nLe resultat est %d.\n", division(nombre1, nombre2));
		}

		printf("\nVoulez vous refaire un calcul?\n1. Oui\n2. Non\n");
		scanf_s("%d", &choix);

	} while (choix != 2);

	return 0;
}

int addition(int nombre1, int nombre2) {
	return nombre1 + nombre2;
}
int soustraction(int nombre1, int nombre2) {
	return nombre1 - nombre2;
}
int multiplication(int nombre1, int nombre2) {
	return nombre1 * nombre2;
}
int division(int nombre1, int nombre2) {
	return nombre1 / nombre2;
}

void calcul(char** s, int choix) {

	if (choix == 1) {
		char *aa = "addition";
		*s = aa;
	}
	else if (choix == 2) {
		char *aa = "soustraction";
		*s = aa;
	}
	else if (choix == 3) {
		char *aa = "multiplication";
		*s = aa;
	}
	else if (choix == 4) {
		char *aa = "division";
		*s = aa;
	}
}