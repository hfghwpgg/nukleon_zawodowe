def zad1(a,b,c):
    print(f"{a}x^2 {'+' if b > 0 else ''}{b}x {'+' if c > 0 else ''} {c}")

def zad2(pln, lata, procent):
    pln_org = pln
    for i in range(lata):
        pln *= (procent/100) + 1
        pln += pln_org
    print(f'na koncie bedzie {pln}zł po {lata} latach')

def zad3(tablica):
    count = 0
    for i in tablica:
        if i < 0: count+=1
    print(f'w tablicy jest {count} liczb ujemnych')

def zad4(tablica3d, r):
    for i in range(3):
         for j in range(3):
             tablica3d[0][i][j] *= r
            
    print(tablica3d)

def zad5(slowo):
    slownik = {
               "nigger": "czarnuch", 
               "daniel": "łysol", 
               "przybysz": "beemiarz", 
               "floyd": "martwy", 
               "papiez": "pedofil", 
               "tusk": "niemiec", 
               "lgbt": "choroba psychiczna"
            }
    if slowo.lower() in slownik:
        print(f'{slowo} znaczy {slownik[slowo.lower()]}')
    else:
        print("nie znam takiego slowa")

tablica3d = [[[1,2,3], [4,5,6], [6,7,8]]]

zad5("Daniel")