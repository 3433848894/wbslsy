int main()
{ 
    //一、键盘输入数字
    list<int> intList;  //整数线性表
    int temp;
    while (cin >> temp)  //多次循环输入temp
    {
        intList.push_back(temp);  //把temp压入线性表，输入Ctrl+Z可以结束输入
    }
    //二、输出排序前的列表
    cout << "排序前：";
    for (int x : intList)
    {
        cout << x << " ";
    }
    cout << endl;
    //三、排序
    intList.sort();  //list有一个成员函数sort()，可以直接排序
 
    //四、输出排序后的列表
    cout << "排序后：";
    for (int x : intList)
    {
        cout << x << " ";
    }
}