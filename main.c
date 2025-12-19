/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 08:28:50 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/19 11:28:12 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/* --- 1. DEFINIM NOMÉS ELS COLORS NECESSARIS --- */
#define GREEN "\033[1;32m"
#define RED   "\033[1;31m"
#define RESET "\033[0m"

/* --- 2. LA MACRO MÀGICA --- 
   Això substitueix la funció. Accepta arguments infinits (...)
   i compara el teu ft_printf amb el printf original. */
#define TEST(...) \
    do { \
        int ret_orig, ret_teu; \
        \
        printf("----------------------------\n"); \
        \
        /* Executa ORIGINAL */ \
        printf("Orig: "); \
        fflush(stdout); \
        ret_orig = printf(__VA_ARGS__); \
        printf("\n"); \
        \
        /* Executa EL TEU */ \
        printf(" Teu: "); \
        fflush(stdout); \
        ret_teu = ft_printf(__VA_ARGS__); \
        printf("\n"); \
        \
        /* COMPARA resultats */ \
        if (ret_orig == ret_teu) \
            printf(GREEN "Resultat: [OK]" RESET " (Retorn: %d)\n", ret_orig); \
        else \
            printf(RED "Resultat: [KO]" RESET " (Orig: %d vs Teu: %d)\n", ret_orig, ret_teu); \
            \
    } while (0)

/* --- 3. EL MAIN --- */
int main(void)
{
    printf("\n=== INICI DELS TESTS ===\n\n");

	printf("\n=== Tests Strings (%%s)===\n\n");
    // Proves de Strings (%s)
    TEST("Hola mon");
    TEST("Hola %s", "42Barcelona");
	TEST("%s", (char *)NULL);

	printf("\n=== Tests Chars (%%c)===\n\n");
    // Proves de Caràcters (%c)
    TEST("Lletra: %c", 'A');
    TEST("Null char: %c", '\0'); // Aquest era el que et donava problemes

	printf("\n=== Tests Numeros (%%d|%%i)===\n\n");
    // Proves de Números (%d, %i)
    TEST("Enter: %d", 12345);
	TEST("Positiu: %i", 42);
    TEST("Negatiu: %i", -42);
    TEST("Zero: %d", 0);

	printf("\n=== Tests Hexadecimals (%%x|%%X)===\n\n");
    // Proves d'Hexadecimal (%x, %X)
    TEST("Hexa petit: %x", 255);
    TEST("Hexa gran: %X", 255);

	printf("\n=== Tests Percentatges (%%%%)===\n\n");
    // Proves de Percentatges (%%)
    TEST("Percentatge: %%");
	TEST("Percentatge al final: %");
	printf("\n=== Tests Punters (%%p)===\n\n");
    // Proves de Punter (%p)
    int a = 10;
    TEST("Punter: %p", &a);
	TEST("Punter NULL: %p", NULL);

    printf("\n=== FI DELS TESTS ===\n");
    return (0);
}
