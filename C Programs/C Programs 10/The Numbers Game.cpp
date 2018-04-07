#include <cstdio>
#include <vector>

using namespace std;

const int NO_OF_ANTI_PRIMES = 177;

unsigned long long anti_primes[NO_OF_ANTI_PRIMES] = {1ULL,2ULL,4ULL,6ULL,12ULL,24ULL,36ULL,48ULL,60ULL,120ULL,180ULL,240ULL,360ULL,720ULL,840ULL,1260ULL,1680ULL,2520ULL,5040ULL,7560ULL,10080ULL,15120ULL,20160ULL,25200ULL,27720ULL,45360ULL,50400ULL,55440ULL,83160ULL,110880ULL,166320ULL,221760ULL,277200ULL,332640ULL,498960ULL,554400ULL,665280ULL,720720ULL,1081080ULL,1441440ULL,2162160ULL,2882880ULL,3603600ULL,4324320ULL,6486480ULL,7207200ULL,8648640ULL,10810800ULL,14414400ULL,17297280ULL,21621600ULL,32432400ULL,36756720ULL,43243200ULL,61261200ULL,73513440ULL,110270160ULL,122522400ULL,147026880ULL,183783600ULL,245044800ULL,294053760ULL,367567200ULL,551350800ULL,698377680ULL,735134400ULL,1102701600ULL,1396755360ULL,2095133040ULL,2205403200ULL,2327925600ULL,2793510720ULL,3491888400ULL,4655851200ULL,5587021440ULL,6983776800ULL,10475665200ULL,13967553600ULL,20951330400ULL,27935107200ULL,41902660800ULL,48886437600ULL,64250746560ULL,73329656400ULL,80313433200ULL,97772875200ULL,128501493120ULL,146659312800ULL,160626866400ULL,240940299600ULL,293318625600ULL,321253732800ULL,481880599200ULL,642507465600ULL,963761198400ULL,1124388064800ULL,1606268664000ULL,1686582097200ULL,1927522396800ULL,2248776129600ULL,3212537328000ULL,3373164194400ULL,4497552259200ULL,6746328388800ULL,8995104518400ULL,9316358251200ULL,13492656777600ULL,18632716502400ULL,26985313555200ULL,27949074753600ULL,32607253879200ULL,46581791256000ULL,48910880818800ULL,55898149507200ULL,65214507758400ULL,93163582512000ULL,97821761637600ULL,130429015516800ULL,195643523275200ULL,260858031033600ULL,288807105787200ULL,391287046550400ULL,577614211574400ULL,782574093100800ULL,866421317361600ULL,1010824870255200ULL,1444035528936000ULL,1516237305382800ULL,1732842634723200ULL,2021649740510400ULL,2888071057872000ULL,3032474610765600ULL,4043299481020800ULL,6064949221531200ULL,8086598962041600ULL,10108248702552000ULL,12129898443062400ULL,18194847664593600ULL,20216497405104000ULL,24259796886124800ULL,30324746107656000ULL,36389695329187200ULL,48519593772249600ULL,60649492215312000ULL,72779390658374400ULL,74801040398884800ULL,106858629141264000ULL,112201560598327200ULL,149602080797769600ULL,224403121196654400ULL,299204161595539200ULL,374005201994424000ULL,448806242393308800ULL,673209363589963200ULL,748010403988848000ULL,897612484786617600ULL,1122015605983272000ULL,1346418727179926400ULL,1795224969573235200ULL,2244031211966544000ULL,2692837454359852800ULL,3066842656354276800ULL,4381203794791824000ULL,4488062423933088000ULL,6133685312708553600ULL,8976124847866176000ULL,9200527969062830400ULL,12267370625417107200ULL,15334213281771384000ULL,18401055938125660800ULL,27601583907188491200ULL,30668426563542768000ULL,36802111876251321600ULL,46002639845314152000ULL,55203167814376982400ULL,73604223752502643200ULL,92005279690628304000ULL};
int anti_prime_divisors[NO_OF_ANTI_PRIMES] = {1,2,3,4,6,8,9,10,12,16,18,20,24,30,32,36,40,48,60,64,72,80,84,90,96,100,108,120,128,144,160,168,180,192,200,216,224,240,256,288,320,336,360,384,400,432,448,480,504,512,576,600,640,672,720,768,800,864,896,960,1008,1024,1152,1200,1280,1344,1440,1536,1600,1680,1728,1792,1920,2016,2048,2304,2400,2688,2880,3072,3360,3456,3584,3600,3840,4032,4096,4320,4608,4800,5040,5376,5760,6144,6720,6912,7168,7200,7680,8064,8192,8640,9216,10080,10368,10752,11520,12288,12960,13440,13824,14336,14400,15360,16128,16384,17280,18432,20160,20736,21504,23040,24576,25920,26880,27648,28672,28800,30720,32256,32768,34560,36864,40320,41472,43008,46080,48384,49152,51840,53760,55296,57600,61440,62208,64512,65536,69120,73728,80640,82944,86016,92160,96768,98304,103680,107520,110592,115200,122880,124416,129024,131072,138240,147456,153600,161280,165888,172032,184320,193536,196608,207360,215040,221184,230400,245760};

void solve()
{
    int target_no_of_divisors;
    scanf("%d", &target_no_of_divisors);

    for(int i = 0; i < NO_OF_ANTI_PRIMES; i++)
    {
        if(anti_prime_divisors[i] > target_no_of_divisors)
        {
            printf("win %llu\n", anti_primes[i]);
            return;
        }
    }

    printf("lose\n");
}

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
        solve();

    return 0;
}