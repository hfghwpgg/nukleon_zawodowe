<?php

echo "siema<br>";

$a = [];
for ($i = 0; $i <= 10; $i+=2) {
    $a[]=$i;
}

for ($i = count($a)-1; $i >= 0; $i--) {
    echo $a[$i], ', ';
}
echo "<br>";

$b = [];
$b[]=0;
$b[]=1;
for ($i = 2; $i <= 15; $i++) {
    $b[] = $b[$i-1] + $b[$i-2];
}

echo implode(',', $b);
echo "<br>";

$c = [];
for ($i=0; $i<5; $i++) {
    $d = [];
    for ($j = 0; $j<5; $j++) {
        $d[] = rand(1,100);
    }
    $c[] = $d;
}

for ($i=0; $i<5; $i++) {
    for ($j = 0; $j<5; $j++) {
        echo $c[$i][$j], ',';
    }
    echo "<br>";
}

$f = [];
for ($i = 0; $i < 50; $i++) {
    $f[] = rand(1,10);
}
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 1) {
        $l += 1;
    }
}
echo "liczba 1: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 2) {
        $l += 1;
    }
}
echo "liczba 2: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 3) {
        $l += 1;
    }
}
echo "liczba 3: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 4) {
        $l += 1;
    }
}
echo "liczba 4: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 5) {
        $l += 1;
    }
}
echo "liczba 5: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 6) {
        $l += 1;
    }
}
echo "liczba 6: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 7) {
        $i += 1;
    }
}
echo "liczba 7: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 8) {
        $l += 1;
    }
}
echo "liczba 8: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 9) {
        $l += 1;
    }
}
echo "liczba 9: ", $l, '<br>';
$l = 0;
for ($i = 0; $i<count($f); $i++) {
    if ($f[$i] == 10) {
        $l += 1;
    }
}
echo "liczba 10: ", $l, '<br>';

$elo = [
    "imie" => "Grzegorz",
    "nazwisko" => "Przybysz",
    "zawiasy" => 10,
    "powod" => "speeding bmw"
];
echo var_dump($elo);
$auto = [
    "marka" => "audi",
    "model" => "a3",
    "przebeig" => 200000,
    "generacja" => "8p",
    "liczba drzwi" => 3,
    "pasazer" => "olek",
    "bagaj" => "sredni"
];
echo var_dump($auto);

?>