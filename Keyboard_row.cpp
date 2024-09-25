class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char,int> mp1;
        map<char,int> mp2;
        map<char, int> mp3;
        
        mp1['q']=1;mp1['w']=1;mp1['e']=1;mp1['t']=1;mp1['r']=1;mp1['y']=1;mp1['u']=1;mp1['i']=1;mp1['o']=1;mp1['p']=1;
        mp2['a']=2;mp2['d']=2;mp2['g']=2;mp2['s']=2;mp2['f']=2;mp2['h']=2;mp2['j']=2;mp2['k']=2;mp2['l']=2;
        mp3['z']=3;mp3['x']=3;mp3['c']=3;mp3['v']=3;mp3['b']=3;mp3['n']=3;mp3['m']=3;
        string st;
        vector<string> v;
        for(int i=0; i<words.size(); i++){
            int count1=0, count2=0, count3=0;
            st = words[i];
            for(int j=0; j<st.size(); j++){
                if(mp1.find((char)tolower(st[j]))!=mp1.end()){
                    count1++;
                    if(count1==st.size()){
                        v.push_back(st);
                    }
                }
                if(mp2.find((char)tolower(st[j]))!=mp2.end()){
                    count2++;
                    if(count2==st.size()){
                        v.push_back(st);
                    }
                }
                if(mp3.find((char)tolower(st[j]))!=mp3.end()){
                    count3++;
                    if(count3==st.size()){
                        v.push_back(st);
                    }
                }
            }
        }
        return v;

    }
};
