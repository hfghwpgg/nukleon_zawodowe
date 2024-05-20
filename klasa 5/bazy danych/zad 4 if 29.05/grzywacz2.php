<!DOCTYPE html>
<html lang="pl">
    <head>
        <meta name="author" content="Adam Grzywacz"/>
        <meta charset="utf-8"/> 
    </head>
    <body>
        <?php 
            $X = 5;
            $Y = 4;
            $Z = 3;
            if ($X>20) {
                ECHO "<p>x jest wiekszsze</p>";
            } else {
                ECHO "<p>x jest mniejsze lub rowne</p>";
            }

            if ($X%2==0) {
                ECHO "<p>x jest parzyste</p>";
            } else {
                ECHO "<p>x jest nieparzyste</p>";
            }

            if ($X>$Y) {
                ECHO "<p> X>Y </p>";
            } elseif ($X<$Y) {
                ECHO "<p> ". htmlspecialchars("X<Y") . " </p>";
            } else {
                ECHO "X==Y";
            }
            ECHO "<div>";
            if ($X <= $Y && $X <= $Z) {
                echo $X . " ";
                if ($Y <= $Z) {
                    echo $Y . " " . $Z;
                } else {
                    echo $Z . " " . $Y;
                }
            } elseif ($Y <= $X && $Y <= $Z) {
                echo $Y . " ";
                if ($X <= $Z) {
                    echo $X . " " . $Z;
                } else {
                    echo $Z . " " . $X;
                }
            } else {
                echo $Z . " ";
                if ($X <= $Y) {
                    echo $X . " " . $Y;
                } else {
                    echo $Y . " " . $X;
                }
            }
            ECHO "</div>";
            $K = 15;
            if ($K<18) {
                ECHO "<a> nie mozna wyswietlic strony dla doroslych</a>";
            } else {
                ECHO "<a href='http://tujestok.eu'> lets gooo </a>";
            }

            $zm = 7;
            if ($zm >=0 && $zm <=1) {
                ECHO "<p>WZOROWA</p>";
            } elseif ($zm >=2 && $zm <=5) {
                ECHO "<p>DOBRA</p>";
            } elseif ($zm >=6 && $zm <=10) {
                ECHO "<p>POPRAWNA</p>";
            } elseif ($zm >10) {
                ECHO "<p>SKANDALICZNA</p>";
            }
            $R = 5;
            $H = 3;
            ECHO "<div>" . $R + $H . "</div>";
            ECHO "<div>" . $R - $H . "</div>";
            ECHO "<div>" . $R * $H . "</div>";
            if ($H!=0) {
                ECHO "<div>" . $R / $H . "</div>";
            } else {
                ECHO "<div> NIE DZIEL PRZEZ ZERO </div>";
            }

            $A = 4;
            $B = 5;
            $C = 3;
            $delta = sqrt(($B * $B) - 4 * $A * $C);
            if ($delta>0) {
                ECHO "<div> SA DWA PIERWIASTKI: ";
                ECHO ((-$B -$delta)/(2 * $A)) . " i ";
                ECHO ((-$B +$delta)/(2 * $A));
                ECHO "</div>";
            } elseif ($delta==0) {
                ECHO "<div> JEST JEDEN PIERWIASTEK: ";
                ECHO (-$B +$delta)/(2 * $A);
                ECHO "</div>";
            } else {
                ECHO "<div> nie ma pierwiastkow</div>";
            }
            $S = "kajak";
            if ($S == strrev($S)) {
                ECHO "<div> to jest palindrom </div>";
            } else {
                ECHO "<div> to nie jest palindrom </div>";
            }

            ECHO "<div>";
            if ($A >= $B && $A >= $C) {
                if (($C*$C)+($B*$B) == ($A*$A)) {
                    ECHO "to jest trojka pitagorejska";
                } else {
                    ECHO "to nie jest trojka pitagorejska";
                }
            } elseif ($B >= $A && $B >= $C) {
                if ($A*$A + $C*$C == $B*$B) {
                    ECHO "to jest trojka pitagorejska";
                } else {
                    ECHO "to nie jest trojka pitagorejska";
                }
            } else {
                if ($A*$A + $B*$B == $C*$C) {
                    ECHO "to jest trojka pitagorejska";
                } else {
                    ECHO "to nie jest trojka pitagorejska";
                }
            }
            ECHO "</div>";
            $X = "AbbA";
            if ($X == strrev($X) && strlen($X) > 5) {
                ECHO "<h1 style='color: red;'> TRAFIENIE </h1>";
            } elseif ($X == strrev($X) && strlen($X) < 5) {
                ECHO "<div style='color: brown; font-size: 2.5em'> DO POPRAWY </div>";
            } else {
                ECHO "<div style='background-color: black; color: white;'> ERROR </div>";
            }

            $A = 2;
            $B = 6;
            $S = $A+$B;
            if ($S%2==0 && $A%2==0 && $B%2==0) {
                ECHO "<div style='text-align: center;'> TAKIE CUDA SIE ZDARZAJA</div>";
            } elseif ($S%2 == 0) {
                ECHO "<div style='text-align: center;'> PARZYSTA</div>";
            } else {
                ECHO "<div style='text-align: center;'> POPRAW CZYNNIKI</div>";
            }

            $W1 = 1.85;
            $W2 = 75;
            $BMI = $W2 / ($W1 * $W1);
            if ($BMI < 18.5) {
                ECHO "<div> niedowaga </div>";
            } elseif ($BMI < 24.9) {
                ECHO "<div> waga prawidlowa </div>";
            } elseif ($BMI < 29.9) {
                ECHO "<div> nadwaga </div>";
            } else {
                ECHO "<div> otylosc </div>";
            }

            
        ?>
    </body>
</html>