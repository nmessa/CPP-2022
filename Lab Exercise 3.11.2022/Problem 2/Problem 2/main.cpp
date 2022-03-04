//Lab Exercise 3.11.2022 Problem 2
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 500

//Function prototypes
void fillArray(int []);
void sortNumbers(int []);
void displayNumbers(int []);

int main()
{
	int numbers[SIZE];
	srand(time(NULL));
	fillArray(numbers);
	cout << "The numbers generated are: " << endl;
	displayNumbers(numbers);
	sortNumbers(numbers);
	cout << "\n\n\nNumbers after sorting:" << endl;
	displayNumbers(numbers);
	return 0;
}

//Sorts an array in descending order
void sortNumbers(int n[])
{
	//Add code here

}

//Displays the contents of an array of numbers
void displayNumbers(int n[])
{
	//Add code here

}

//Fills an array with 500 random numbers from 0 - 999
void fillArray(int n[])
{
	//Add code here

}

//The numbers generated are:
//828
//91  192  381  931  139  241  778  422  902  562  602  454  412  560  189
//429  290  596  503  329  999  912  60  317  281  514  396  762  719  21
//288  124  880  908  972  999  884  232  533  300  425  20  444  30  225
//191  891  634  17  809  736  598  453  842  648  825  370  511  46  932
//5  70  444  367  739  125  224  879  632  358  75  7  115  542  767
//668  874  150  231  358  354  848  219  627  394  166  643  782  328  952
//988  672  860  965  785  894  244  540  708  988  863  747  517  167  526
//895  546  865  456  501  904  705  485  353  224  489  101  77  518  428
//394  237  518  55  563  752  56  504  187  969  934  516  818  959  995
//869  657  809  398  732  435  582  630  939  42  84  969  799  616  575
//304  164  328  349  341  697  228  520  952  461  808  348  518  273  639
//129  364  56  188  58  346  622  108  695  923  485  410  153  3  485
//346  628  522  316  34  930  33  220  334  325  34  885  332  732  21
//75  999  58  344  441  87  844  55  501  601  650  549  462  651  23
//593  20  67  940  252  911  704  434  345  634  657  959  46  897  429
//530  875  817  707  122  841  359  699  181  596  579  644  989  300  454
//279  583  873  186  315  718  293  130  443  974  670  418  109  717  59
//240  221  39  151  402  865  361  852  842  886  741  915  912  491  760
//993  902  788  769  851  850  762  140  773  319  801  13  807  669  362
//400  170  122  578  136  330  121  947  855  100  618  193  550  897  866
//72  749  235  13  892  941  712  881  680  420  309  821  315  905  661
//489  760  776  194  680  286  128  299  731  488  651  863  40  380  750
//304  587  841  707  355  851  981  43  48  1  405  207  77  604  506
//816  80  601  176  349  44  441  111  366  587  610  623  71  677  227
//192  607  768  762  88  425  777  177  201  138  90  705  338  189  972
//565  572  339  551  962  80  663  583  165  807  625  361  910  554  865
//335  387  819  735  864  696  236  664  644  982  607  411  710  33  245
//789  451  63  163  650  970  614  545  461  772  772  37  266  198  93
//848  362  957  729  367  871  41  932  5  152  661  114  774  935  422
//642  959  632  993  850  677  45  338  676  708  225  291  343  449  769
//850  169  137  554  382  84  995  406  155  862  947  889  19  886  424
//595  144  659  449  383  103  375  196  708  599  276  303  705  379  654
//675  270  636  457  885  472  11  516  238  782  469  655  982  610  935
//304  564  474  972
//
//
//
//
//Numbers after sorting:
//999
//999  999  995  995  993  993  989  988  988  982  982  981  974  972  972
//972  970  969  969  965  962  959  959  959  957  952  952  947  947  941
//940  939  935  935  934  932  932  931  930  923  915  912  912  911  910
//908  905  904  902  902  897  897  895  894  892  891  889  886  886  885
//885  884  881  880  879  875  874  873  871  869  866  865  865  865  864
//863  863  862  860  855  852  851  851  850  850  850  848  848  844  842
//842  841  841  828  825  821  819  818  817  816  809  809  808  807  807
//801  799  789  788  785  782  782  778  777  776  774  773  772  772  769
//769  768  767  762  762  762  760  760  752  750  749  747  741  739  736
//735  732  732  731  729  719  718  717  712  710  708  708  708  707  707
//705  705  705  704  699  697  696  695  680  680  677  677  676  675  672
//670  669  668  664  663  661  661  659  657  657  655  654  651  651  650
//650  648  644  644  643  642  639  636  634  634  632  632  630  628  627
//625  623  622  618  616  614  610  610  607  607  604  602  601  601  599
//598  596  596  595  593  587  587  583  583  582  579  578  575  572  565
//564  563  562  560  554  554  551  550  549  546  545  542  540  533  530
//526  522  520  518  518  518  517  516  516  514  511  506  504  503  501
//501  491  489  489  488  485  485  485  474  472  469  462  461  461  457
//456  454  454  453  451  449  449  444  444  443  441  441  435  434  429
//429  428  425  425  424  422  422  420  418  412  411  410  406  405  402
//400  398  396  394  394  387  383  382  381  380  379  375  370  367  367
//366  364  362  362  361  361  359  358  358  355  354  353  349  349  348
//346  346  345  344  343  341  339  338  338  335  334  332  330  329  328
//328  325  319  317  316  315  315  309  304  304  304  303  300  300  299
//293  291  290  288  286  281  279  276  273  270  266  252  245  244  241
//240  238  237  236  235  232  231  228  227  225  225  224  224  221  220
//219  207  201  198  196  194  193  192  192  191  189  189  188  187  186
//181  177  176  170  169  167  166  165  164  163  155  153  152  151  150
//144  140  139  138  137  136  130  129  128  125  124  122  122  121  115
//114  111  109  108  103  101  100  93  91  90  88  87  84  84  80
//80  77  77  75  75  72  71  70  67  63  60  59  58  58  56
//56  55  55  48  46  46  45  44  43  42  41  40  39  37  34
//34  33  33  30  23  21  21  20  20  19  17  13  13  11  7
//5  5  3  1