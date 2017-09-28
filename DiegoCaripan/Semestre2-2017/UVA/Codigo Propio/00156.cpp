#include <bits/stdc++.h>
using namespace std;

int main(){
	string inputs,sortedInputs;
	vector<string> vc;
	vector<pair<string,bool> > sortedVC;
	while((cin>>inputs) && inputs!="#"){
		sortedInputs=inputs;
		vc.push_back(inputs);
		transform(sortedInputs.begin(), sortedInputs.end(), sortedInputs.begin(), ::tolower);
		sort(sortedInputs.begin(), sortedInputs.end());
		pair<string,bool> aux;
		aux.first=sortedInputs; aux.second=true;
		sortedVC.push_back(aux);
	}
	for(int i = 0; i < vc.size() ; i++)
		for(int j = 0; j < vc.size();j++){
			if(((sortedVC.at(i).second)|(sortedVC.at(j).second))==true)
				if(sortedVC.at(i).first == sortedVC.at(j).first){
					sortedVC.at(i).second = false;
					sortedVC.at(j).second = false;
					break;
				}
		}
	for (int i = 0; i < vc.size(); i++){
		if(sortedVC.at(i).second==true){
			cout<<vc.at(i)<<endl;
		}
	}
	

}