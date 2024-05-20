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
			echo<<<END
			<ul style='color: white; background-color: black;'>
				<li> int</li>
				<li> float</li>
				<li> string</li>
				<li> bool</li>
				<li> tablica</li>
				<li> objekt</li>
				<li> NULL</li>
			</ul>
			END;
			
			print("<p style='font-family: Segoe UI; font-size 120%; width 75%; background-color: skyblue'> W języku PHP słowo kluczowe 'static' oznacza, że dana metoda lub zmienna należy do klasy, a nie do instancji tej klasy. Oznacza to, że metoda lub zmienna statyczna są dostępne z poziomu klasy, a nie z poziomu obiektu stworzonego na podstawie tej klasy. </p>");
			
			print("<p style='font-family: Segoe UI; font-size 120%; width 75%; background-color: skyblue'>echo nie zwraca nic, a print zwraca int '1'</p>");
			
			print("<table style='margin: auto; width: 50%; border: 1px dashed red'> <tr> <th> \$GLOBALS to tablica z globalnymi, a wiec dostepnymi w kazdym miejscu zmiennymi. index to nazwa zmiennej, a \$GLOBALS[index] zwraca jej wartosc </th> </tr> </table>");
			
			$A = "jan kowalski";
			$Alen = strlen($A);
			$Aw = str_word_count($A);
			$Arev = strrev($A);
			$B = "robert grzegorz nowak";
			$Blen = strlen($B);
			$Bw = str_word_count($B);
			$Brev = strrev($B);
			echo "<p> zmienna A przechowuje string o dlugosci $Alen </p>";
			echo "<p>zmienna B przechowuje string o dlugosci $Blen</p>";
			echo "<p>zmienna A przechowuje string z $Aw slowami</p>";
			echo "<p>zmienna B przechowuje string z $Bw slowami</p>";
			echo "<p> odwrocone A: $Arev</p>";
			echo "<p> odwrocone B: $Brev</p>";
			
			echo "<h3 style='background-color: #330033; color:#ffffb3'> strlen </h3>";
			echo "<h3 style='background-color: #330033; color:#ffffb3'> strrev </h3>";
			echo "<h3 style='background-color: #330033; color:#ffffb3'> str_word_count </h3>";
			echo "<h3 style='background-color: #330033; color:#ffffb3'> strtolower </h3>";
			echo "<h3 style='background-color: #330033; color:#ffffb3'> strtoupper </h3>";
        ?>
    </body>
</html>