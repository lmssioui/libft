/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:28:09 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/10 00:30:39 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // Incluez le fichier d'en-tête de votre bibliothèque personnelle
#include <stdio.h>  // Incluez la bibliothèque standard pour utiliser printf

int main() {
    // Chaîne de caractères d'entrée
    const char *input_string = "Bonjour;monde;split;example";
    
    // Caractère délimiteur
    char delimiter = ';';

    // Appel de la fonction ft_split
    char **result = ft_split(input_string, delimiter);

    if (result != NULL) {
        // Affichage des résultats
        for (int i = 0; result[i] != NULL; i++) {
            printf("Sous-chaîne %d : %s\n", i, result[i]);
        }

        // Libération de la mémoire allouée pour le tableau de chaînes
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    } else {
        printf("Erreur lors de l'appel à ft_split.\n");
    }

    return 0;
}

