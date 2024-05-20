<?php
class Student {
    private $imie;
    private $nazwisko;
    private $index;
    private $portfel;
    private $plecak;
    private $kierunek;
    public function __construct($i, $n, $ix, $p, $pl, $k)
    {
        $this->imie = $i;
        $this->nazwisko = $n;
        $this->index = $ix;
        $this->portfel = $p;
        $this->plecak = $pl;
        $this->kierunek = $k;
    } 
    function przedstaw_sie() {
        echo "siema jestem $this->imie $this->nazwisko <br>";
        return [$this->imie, $this->nazwisko];
    }
    function przedstaw_kumpla($i) {
        echo "siema moj kumpel to ", $i[0], " ", $i[1],"<br>";
    }
    function zaplac($ilosc) {
        if ($this->portfel > $ilosc) {
            $this->portfel -= $ilosc;
        } else {
            echo "jestes za biedny ;'((( <br>";
        }
        echo "masz w porfelu: ",$this->portfel, "<br>";
        
    }
    function doladuj_portfel($ilosc) {
        $this->portfel += $ilosc;
        echo "masz w porfelu: ",$this->portfel, "<br>";
    }
    function plecak_wloz($item) {
        if (count($this->plecak) <= 5) {
            $this->plecak[] = $item;
        } else {
            echo "masz pelen plecak!!!!";
        }
        echo var_dump($this->plecak), "<br>";
    }
    function plecak_wyjmij($item) {
        $index = array_search($item, $this->plecak);
        if ($index !== false) {
            unset($this->plecak[$index]);
        }
        echo var_dump($this->plecak),"<br>";
    }
}

class Samochod {
    private $nazwa;
    private $moc;
    private $typ_paliwa;
    private $stan_baku;
    private $max_stan_baku;
    private $pasazerowie;
    private $rejestracja;
    private $max_pasazerowie;
    public function __construct($n, $m, $t, $s, $ms, $p, $mp,  $r) {
        $this->nazwa = $n;
        $this->moc = $m;
        $this->typ_paliwa = $t;
        $this->stan_baku = $s;
        $this->max_stan_baku = $ms;
        $this->pasazerowie = $p;
        $this->max_pasazerowie = $mp;
        $this->rejestracja = $r;
    }
    function wypisz_dane() {
        echo "nazwa: $this->nazwa <br>";
        echo "moc: $this->moc <br>";
        echo "typ paliwa: $this->typ_paliwa <br>";
        echo "stan baku: $this->stan_baku <br>";
        echo "liczba pasazerow: $this->pasazerowie <br>";
        echo "rejestracja: $this->rejestracja <br>";
    }
    function zagazuj() {
        if ($this->typ_paliwa === "LPG"){
            echo "juz jest zagazowany!!!<br>";
            return;
        }
        $this->typ_paliwa = "LPG";
    }
    function zatankuj($ile) {
        if ($ile < 0) {
            echo "ZŁODZIEJE!!!!!!1<br>";
            return;
        }
        if ($this->stan_baku+$ile > $this->max_stan_baku) {
            echo "wylalo sie ;((<br>";
            $this->stan_baku = $this->max_stan_baku;
            return;
        }  
        
        $this->stan_baku += $ile;
             
    }
    function wsiadz() {
        if ($this->pasazerowie+1 > $this->max_pasazerowie) {
            echo "nie ma miejsc! ;(<br>";
            return;
        }
        $this->pasazerowie += 1;
    }
    function wysiadz() {
        if ($this->pasazerowie-1 < 0) {
            echo "juz nikogo nie ma! ;(<br>";
            return;
        }
        $this->pasazerowie -= 1;
    }
    function przerejestruj($r) {
        $this->rejestracja = $r;
    }
}

$mojStudent = new Student("szymon", "mucha", 12, 1000, ["piórnik"], "informejtyk");
$mojStudent2 = new Student("olek", "kloc", 13, -5, ["mefedron"], "informejtyk");

$mojStudent->przedstaw_sie();
$mojStudent->przedstaw_kumpla($mojStudent2->przedstaw_sie());
$mojStudent->zaplac(100);
$mojStudent->doladuj_portfel(10);
$mojStudent->plecak_wloz("piwo");
$mojStudent->plecak_wyjmij("piórnik");

$mojStudent2->przedstaw_sie();
$mojStudent2->przedstaw_kumpla($mojStudent->przedstaw_sie());

$samochod1 = new Samochod("becia", 20, "Diesel", 3, 5, 2, 5, "A1N1");
$samochod1->wypisz_dane();
$samochod1->zagazuj();
$samochod1->zatankuj(110);
$samochod1->wsiadz();
$samochod1->wsiadz();
$samochod1->wsiadz();
$samochod1->wsiadz();
$samochod1->wysiadz();
$samochod1->przerejestruj("0R4L");
$samochod1->wypisz_dane();

?>