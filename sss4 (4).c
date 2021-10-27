#include <vector>
#include"dirent.h"
#include"unistd.h"
 using namespace std;
 vector <string> VecFilePathNames;
 vector <string> VecSubNames;
 void FindFileName(string path, int layer)
 {
     struct _finddata_t   filefind;	string  strCurr = path + "\\*.*";
     	int   done = 0, i, handle;
     		if ((handle = _findfirst(strCurr.c_str(), &filefind)) == -1)
                        return;
	while (!(done = _findnext(handle, &filefind)))
            {
                if (!strcmp(filefind.name, ".."))
                		{			continue;		}
    if ((_A_SUBDIR == filefind.attrib))
        {			strCurr = path + "\\" + filefind.name;
    FindFileName(strCurr, layer + 1);		}
    else		{
                        //保存的为全路径名称
                        strCurr = path + "\\" + filefind.name;
    //文件的名字
    string strSubName = filefind.name;
    		VecFilePathNames.push_back(strCurr);
    					VecSubNames.push_back(strSubName);
    					}	}	_findclose(handle);}
    					int main(){
    					     string strOriImgPath = "E:\\test";
    					      FindFileName(strOriImgPath, 0);
    					       return 0;}
