<!DOCTYPE html>
<html>
<head>
	<title> ADAM GRZYWACZ 14.09.2023 </title>
</head>
<body>
<?php
echo "ZAD1<br>";
$i = 0;
while ($i++ < 10) {
	echo $i, '<br>';
}
echo "ZAD2<br>";
$m = 11;
$n = 5;
$i = 0;
while ($i++ < $n) {
	echo $m * $i, '<br>';
}
echo "ZAD3<br>";
$i = 0;
$s = 1;
while ($i++ < $n) {
	$s *= $i;
}
echo $s, '<br>';
echo "ZAD4<br>";
echo "CIAG ARYTMETYCZNY<br>";
$a1 = 2;
$r = 4;
$n = 25;
$i = 0;
while ($i++ < $n) {
	if ($i > 100) {break;}
	$an = $a1 + ($i-1) * $r;
	echo $an, '<br>';
}
echo "ZAD5<br>";
$n = 10;
for ($i = $n; $i <= $n+20; $i++) {
	echo $i, '<br>';
}
echo "ZAD6<br>";
$n = 6;
for ($i = $n; $i <= $n+20; $i+=2) {
	echo $i, '<br>';
}
echo "ZAD7<br>";
$suma = 0;
for ($i = 8; $i > 0; $i--) {
	$suma += $i * $i;
}
echo "POTRZEBA $suma CEGIEŁ";

echo "ZAD8<br>";
$elo = 100;
for ($i = 0; $i <= 11; $i++) {
	$elo += $elo * 0.1;
}
echo "MARCIN USBIERA \$$elo KASY<br>";
echo "ZAD9<br>";
$s = 1;
$n = 5;
for ($i = 1; $i <= $n; $i++)  {
	$s *= $i;
}
echo $s, "<br>";

for ($i = 1; $i <=10; $i++) {
	for ($j = 1; $j <=10; $j++) {
		echo $i*$j, " ";
	}
	echo "<br>";
}
?>


</body>
</html>
