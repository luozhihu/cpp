#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    // std::cout << "Enter two numbers:" << std::endl;
    // int v1 = 0, v2 = 0;
    // std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    // return 0;
    setvbuf( stdout, NULL, _IOLBF, 1024 );  //设置控制台输出为行缓存模式，把缓冲区与流相关 
	cout <<"hello world\n";                
	Sleep(5000);                            
	cout <<"leeboy" <<endl;                 
	system("pause");
	return 0;
}