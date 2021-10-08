class Solution {
public:
    unordered_map<string, string> months = {{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"}, {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"},       {"Dec","12"}};
    
    string reformatDate(string date) {
        int first = date.find(' ');
        
        string day = date.substr(0, first - 2);
        if(day.length() < 2) day = '0' + day;
        
        return date.substr(first + 5, 4) + '-' + months[date.substr(first + 1, 3)] + '-' + day;
    }
};