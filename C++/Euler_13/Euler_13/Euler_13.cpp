// Euler_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long double nums_arry[100] = {
	3710728753.3902102798797998220837590246510135740250,
	4637693767.7490009712648124896970078050417018260538,
	7432498619.9524741059474233309513058123726617309629,
	9194221336.3574161572522430563301811072406154908250,
	2306758820.7539346171171980310421047513778063246676,
	8926167069.6623633820136378418383684178734361726757,
	2811287981.2849979408065481931592621691275889832738,
	4427422891.7432520321923589422876796487670272189318,
	4745144573.6001306439091167216856844588711603153276,
	7038648610.5843025439939619828917593665686757934951,
	6217645714.1856560629502157223196586755079324193331,
	6490635246.2741904929101432445813822663347944758178,
	9257586771.8337217661963751590579239728245598838407,
	5820356532.5359399008402633568948830189458628227828,
	8018119938.4826282014278194139940567587151170094390,
	3539866437.2827112653829987240784473053190104293586,
	8651550600.6295864861532075273371959191420517255829,
	7169388870.7715466499115593487603532921714970056938,
	5437007057.6826684624621495650076471787294438377604,
	5328265410.8756828443191190634694037855217779295145,
	3612327252.5000296071075082563815656710885258350721,
	4587657617.2410976447339110607218265236877223636045,
	1742370690.5851860660448207621209813287860733969412,
	8114266041.8086830619328460811191061556940512689692,
	5193432545.1728388641918047049293215058642563049483,
	6246722164.8435076201727918039944693004732956340691,
	1573244438.6908125794514089057706229429197107928209,
	5503768752.5678773091862540744969844508330393682126,
	1833638482.5330154686196124348767681297534375946515,
	8038628759.2878490201521685554828717201219257766954,
	7818283375.7993103614740356856449095527097864797581,
	1672632010.0436897842553539920931837441497806860984,
	4840309812.9077791799088218795327364475675590848030,
	8708698755.1392711854517078544161852424320693150332,
	5995940689.5756536782107074926966537676326235447210,
	6979395067.9652694742597709739166693763042633987085,
	4105268470.8299085211399427365734116182760315001271,
	6537860736.1501080857009149939512557028198746004375,
	3582903531.7434717326932123578154982629742552737307,
	9495375976.5105305946966067683156574377167401875275,
	8890280257.1733229619176668713819931811048770190271,
	2526768027.6078003013678680992525463401061632866526,
	3627021854.0497705585629946580636237993140746255962,
	2407448690.8231174977792365466257246923322810917141,
	9143028819.7103288597806669760892938638285025333403,
	3441306557.8016127815921815005561868836468420090470,
	2305308117.2816430487623791969842487255036638784583,
	1148769693.2154902810424020138335124462181441773470,
	6378329949.0636259666498587618221225225512486764533,
	6772018697.1698544312419572409913959008952310058822,
	9554825530.0263520781532296796249481641953868218774,
	7608532713.2285723110424803456124867697064507995236,
	3777424253.5411291684276865538926205024910326572967,
	2370191327.5725675285653248258265463092207058596522,
	2979886027.2258331913126375147341994889534765745501,
	1849570145.4879288984856827726077713721403798879715,
	3829820378.3031473527721580348144513491373226651381,
	3482954382.9199918180278916522431027392251122869539,
	4095795306.6405232632538044100059654939159879593635,
	2974615218.5502371307642255121183693803580388584903,
	4169811622.2072977186158236678424689157993532961922,
	6246795719.4401269043877107275048102390895523597457,
	2318970677.2547915061505504953922979530901129967519,
	8618808822.5875314529584099251203829009407770775672,
	1130673970.8304724483816533873502340845647058077308,
	8295917476.7140363198008187129011875491310547126581,
	9762333104.4818386269515456334926366572897563400500,
	4284628018.3517070527831839425882145521227251250327,
	5512160354.6981200581762165212827652751691296897789,
	3223819573.4329339946437501907836945765883352399886,
	7550616496.5184775180738168837861091527357929701337,
	6217784275.2192623401942399639168044983993173312731,
	3292418570.7147349566916674687634660915035914677504,
	9951867143.0235219628894890102423325116913619626622,
	7326746080.0591547471830798392868535206946944540724,
	7684182252.4674417161514036427982273348055556214818,
	9714261791.0342598647204516893989422179826088076852,
	8778364618.2799346313767754307809363333018982642090,
	1084880252.1674670883215120185883543223812876952786,
	7132961247.4782464538636993009049310363619763878039,
	6218407357.2399794223406235393808339651327408011116,
	6662789198.1488087797941876876144230030984490851411,
	6066182629.3682836764744779239180335110989069790714,
	8578694408.9552990653640447425576083659976645795096,
	6602439640.9905389607120198219976047599490197230297,
	6491398268.0032973156037120041377903785566085089252,
	1673093931.9872750275468906903707539413042652315011,
	9480937724.5048795150954100921645863754710598436791,
	7863916702.1187492431995700641917969777599028300699,
	1536871371.1936614952811305876380278410754449733078,
	4078992311.5535562561142322423255033685442488917353,
	4488991150.1440648020369068063960672322193204149535,
	4150312888.0339536053299340368006977710650566631954,
	8123488067.3210146739058568557934581403627822703280,
	8261657077.3948327592232845941706525094512325230608,
	2291880205.8777319719839450180888072429661980811197,
	7715854250.2016545090413245809786882778948721859617,
	7210783843.5069186155435662884062257473692284509516,
	2084960398.0134001723930671666823555245252804609722,
	5350353422.6472524250874054075591789781264330331690,
};

int _tmain(int argc, _TCHAR* argv[]){
	long double sum = 0;
	cout.precision(11);
	for (int i = 0; i < 100; i++){
		sum += nums_arry[i];
		cout << sum << endl;
	}
	cout << "\n\n\n\n\nFinal Total is: " << sum << endl;
	system("pause");
	return 0;
}
