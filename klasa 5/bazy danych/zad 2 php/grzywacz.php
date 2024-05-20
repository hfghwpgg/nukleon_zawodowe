<!DOCTYPE html>
<html lang="pl">
    <head>
        <meta name="author" content="Adam Grzywacz"/>
        <meta charset="utf-8"/> 
    </head>
    <body>
        <?php 
        // wypisze 'zadanie 1' oraz podkreslona nazwe mojej szkoly
            echo "<h2> zadanie 1 </h2>";
            echo "<u> ZS2 Nukleon </u>";
        /* 
        W klasie 4 nauczę się posługiwać językiem PHP
        Pozwoli mi to zwiększyć swoje szanse na zaliczenie egzaminu INF.04
        To bardzo dobry pomysł.
        */

            echo "<p> wielkość znaków ma znaczenie przy nazewnictwie zmiennych. AAA !== aaa";
            // powyższuy kod wypisze na stronie odpowiedz na pytanie z zadania.

            echo<<<END
            <ul>
                <li> nie moze zaczynac sie cyfra </li>
                <li> nie moze miec spacji</li>
                <li> zaczyna sie ze znakiem dolara <$></li>
                <li> musi zaczynac sie litera lub podloga <_></li>
                <li> rozroznia wielkosc liter</li>
            </ul>
            END;
            $X = "piątek";
            echo "Weekend zaczyna się w $X";
        
        ?>
    </body>
</html>