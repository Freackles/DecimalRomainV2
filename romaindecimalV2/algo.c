//Algo romaintofloat
//But: transformer un nombre saisit pas l'utilisateur en chiffre romain/décimal
//Entrées: Decimaux/r saisit par l'utilisateur
//Sortie: Nombre convertie

//Sous-programme

//Conversion décimal vers romain
/*procedure prRomain (nb: reel)
var
    temp, result: chaine
    cpt: entier

debut
//iitialisation
    cpt<-1
    result <-""

    //cas 1000+
    si nb>1000 alors
        repeat
            nb <- nb-1000
            temp <- result,"M"
        until nb<1000
        result <- temp
        temp <- ""
    finsi

    //cas100+
    si nb>100 et nb<1000 alors
    cpt<- 1
        repeter
            si cpt<>4 ou cpt<>5 ou cpt<>9 alors
                temp <-temp,"C"
            sinon si cpt=4 alors
                temp <- "CD"
            sinon si cot=5 alors
                temp <- "D"
            sinon si cpt=9 alors
                temp <- "CM"
            finsi
            finsi
            finsi
            finsi

            cpt <- cpt+1
        jusqua nb<100
        result <- result,temp
        temp <- ""
    finsi

    //cas10+
    si nb>10 et nb<100 alors
    cpt<- 1
        repeter
            si cpt<>4 ou cpt<>5 ou cpt<>9 alors
                temp <- temp,"X"
            sinon si cpt=4 alors
                temp <- "XL"
            sinon si cot=5 alors
                temp <- "L"
            sinon si cpt=9 alors
                temp <- "XC"
            finsi
            finsi
            finsi
            finsi

            cpt <- cpt+1
        jusqua nb<10
        result <- result,temp
        temp <- ""
    finsi

    //cas1+
    si nb>1 et nb<10 alors
    cpt<- 1
        repeter
            si cpt<>4 ou cpt<>5 ou cpt<>9 alors
                temp<-result,"I"
            sinon si cpt=4 alors
                temp <- "IV"
            sinon si cot=5 alors
                temp <- "V"
            sinon si cpt=9 alors
                temp <- "IX"
            finsi
            cpt <- cpt+1
        jusqua nb<10
        result <- result,temp
        temp <- ""
    finsi

    ecrire (nb,"est egal à ", result)

finProcedure


//Conversion romain vers décimal
procedure Decimal(nb: chaine)
const
   I<-1, V<-5, X<-10, L<-50, C<-100, D<-500, M<-1000: entier
var
    result: reel
    cpt, temp, temp2: entier

debut
    //initialisation
    temp <- 0
    temp2 <- 0

    //test de chaque chiffre romain
    pour cpt de 1 a longueur(nb) faire
        cas nb[cpt] parmis
            cas "I", "i": temp2 <- I
            cas "V", "v": temp2 <- V
            cas "X", "x": temp2 <- X
            cas "L", "l": temp2 <- L
            cas "C", "c": temp2 <- C
            cas "D", "d": temp2 <- D
            cas "M", "m": temp2 <- M
        fincasparmis

        si (temp<temp2) ou (temp<>0) alors
            result <- result+temp2
        sinon
            result <- result-temp*2+temp2
        finsi

        temp <- temp2

    finpour

    ecrire (nb,"est egal à ", result)
finprocedure



//****************************************

//Corps principal principal

Var
    sNb: réel
    cRm: chaine
    iTemp: entier

Debut
    //On force l'utilisateur à choisir un bon chiffre pour eviter les conflits eventuelle
    repeter
        Ecrire("Bienvenue sur le Probgramme de convertisseur")
        Ecrire("Choisir votre mode de conversion")
        Ecrire("Saisir 1 pour du décimal vers romain")
        Ecrire("Saisir 2 pour du romain vers décimal")
        Ecrire("Saisir 0 pour quitter")
        Lire (iTemp)
    jusqua ((iTemp<=2) et (iTemp>=0))

    Ecrire ("Sairir le nombre à convertir")
    //appel des differents sous programme permettant d'afficher le resultat final
    Cas iTemp Parmis
        cas 1 :
            repeter
                lire (sNb)
            jusqua ((sNb>0)et(sNb<=3999) //on verifie que l'utilisateur ne dépasse pas 3999 et ne vas pas en dessous de 0
            prRomain(sNb)
        cas 2 :
            lire (cRm)
            prDecimal(cRm)
    fincasparmis

fin*/
