# C / C++ Roadmap

---

# #1 C

---

### *Chaque variable stock différents nombres de donner: Exemple, **“int”** ou **“char”** ne stockeront que peu de donner par rapport a **“double”** ou **“long”**, elle sont aussi moins lourde en ressources (mémoire RAM bien souvent).*

### *(Exemple: “Hello World!” en C donnerais.)*

```c
#include <stdio.h>

int main() {
   printf("Hello World\n");
   return 0;
}
```

‘C’ est sensible a la casse, ça syntaxe y est strict, mais assez basique. 

En ‘C’ les données des dites variables sont stocker dans la RAM

En ‘C’, chaques variables doit avoir un nom et être déclarer en début de code (si utilisation de mots personnalisé). Chaque variable dois pointer vers un byte de mémoire ram. 

### *Un commentaire sur une ligne se déclare avec:*

```c
// Ceci est un commentaire
```

### Un commentaire sur plusieurs ligne se déclare avec

```c
/*
Ceci 
Est
Un
Commentaire
*/
```

### *Précisions sur les variables:*

```c
#include <stdio.h>

//fichier pour apprendre et s'entraîner avec les variables.
//création de la fonction 'int main(void)
int main(void) {
    
    //assignement des variable dans la fonction 'int main(void)':
		    float _heure_travailler = 261.30;
				int _jour_travailler = 23;
		    char _jours = 'j';
			  char _heures = 'h';
    //mot clef pour afficher les variables
	    /*
			  %d : nombres entier (int)
		    %f : nombre flottants & double (float)
		    %c : caractère (char)
		    %s : chaîne de caratère (texte)
	    */

    //fonction printf pour afficher les valeurs a l'écran:
		    printf("J'ai travailler %.2f%c en %d%c\n", _heure_travailler, _heures, _jour_travailler, _jours );
		    return 0;
}
//après compilation, cette fonction print: "J'ai travailler 261.30h en 23j"

//Mot reserver:
/*
    auto = Ce mot réservé permet d'indiquer un spécificateur d'entreposage de classe.
    break = Ce mot réservé permet d'interrompre une boucle ou une instruction «switch».
    case = Ce mot réservé permet d'identifier un cas dans un mot réservé «switch».
    char = Ce mot réservé identifie le type de données de caractère.
    const = Ce mot réservé permet de définir une constante.
    continue = Ce mot réservé permet de recommencer au début d'une boucle.
    default = Ce mot réservé permet d'exécuter un cas par défaut si les autres ne sont pas correspondant dans un mot réservé «switch».
    do = Ce mot réservé permet d'effectuer une boucle avec un mot réservé «while».
    double = Ce mot réservé identifie le type de données réel de double précision.
    else = Ce mot réservé permet d'effectuer une situation contraire à la condition «if».
    enum = Ce mot réservé permet d'identifier un type de données d'énumération.
    extern = Ce mot réservé permet de déclarer une méthode externe comme par exemple lorsqu'on définit une API de Windows.
    float = Ce mot réservé permet d'identifier le type de données de «float».
    for = Ce mot réservé permet d'effectuer un compteur de boucle.
    goto = Ce mot réservé permet de faire un saut d'exécution à une étiquette.
    if = Ce mot réservé permet d'effectuer le traitement d'une condition.
    inline = Ce mot réservé permet d'indiquer qu'il faut que le compilateur élargisse la fonction en ligne au moment de l'appel de la fonction ou d'un membre de fonctions
    int = Ce mot réservé identifie le type de données d'entier.
    long = Ce mot réservé identifie le type de données d'entier long.
    register = Ce mot réservé permet d'indiquer qu'il faut utiliser autant que possible les registres du microprocesseur pour contenir le contenu d'une variable ou d'un paramètre.
    restrict = Ce mot réservé permet d'indiquer une déclaration de fonction ou de définition n'envoyant pas un type de format pointeur, ainsi le compilateur retournera un objet n'étant pas un alias mais avec tous les pointeurs des autres.
    return = Ce mot réservé permet de terminer une fonction avec une valeur optionnelle.
    short = Ce mot réservé identifie le type de données d'entier court.
    signed = Ce mot réservé permet d'indiquer que le type de données est entier, donc qu'il support les nombres négatif.
    sizeof = Ce mot réservé permet d'indiquer la taille d'un objet, d'une variable ou d'un type de données.
    static = Ce mot réservé permet de rendre disponible une fonction ou variable d'une classe de façon global comme si elle se trouvait en dehors de la classe elle-même.
    struct = Ce mot réservé permet d'identifier une structure de données (un enregistrement).
    switch = Ce mot réservé permet d'effectuer des testes de cas.
    typedef = Ce mot réservé permet de définir un type de données.
    uinon = Ce mot réservé permet de définir des champs avec la même position de déplacement dans une structure, donc qu'y se superpose.
    unsigned = Ce mot réservé permet d'indiquer que le type de données ne contient pas de partie négatif, que c'est n'est pas un nombre entier mais un nombre naturel.
    void = Ce mot réservé permet de définir un type n'ayant aucun type.
    volatile = Ce mot réservé permet d'indiquer que la variable ne doit pas changer d'ordre de place en mémoire après la compilation.
    while = Ce mot réservé permet de définir une boucle.
    _Bool = Ce mot réservé identifie le type de données booléen pouvant être 0 ou 1.
    _Complex = Ce mot réservé identifie le type de données d'un nombre complexe.
    _Imaginary = Ce mot réservé identifie le type de données d'un nombre imaginaire.
*/
```

---

# #2 C++

---

C++, bien que basé du langage C ne partage en fait que ça structure et son niveaux. (POO et bas niveaux). Autrement tout (ou presque) y est différents. Cependant C++ est un peu plus dur, certes, mais un peu plus au goût du jour lorsqu’il s’agit de crée des applications (2D ou 3D) rapide. C++ étant un des langages les plus rapide.
