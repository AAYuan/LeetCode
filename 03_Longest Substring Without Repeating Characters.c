//
//  main.cpp
//  Longest Substring Without Repeating Characters
//
//  Created by AYuan on 15/7/28.
//  Copyright (c) 2015年 AYuan. All rights reserved.
//
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    /**
     * Hash中key存放字符，value存放字符位置
     */
    int Hash[26];
    memset(Hash,-1,sizeof(int)*26);
    int len = 0;//当前子串长度
    int maxL = 0;//最长子串长度
    //边界判断
    if(sizeof(s) == 0) return 0;
    for(int i = 0; i < sizeof(s);i++,len++) {
        
        if(Hash[s[i]-'a'] >= 0) { //出现重复
            
            maxL = maxL > len ? maxL : len;
            //跳到第一个重复字符的下一个位置
            i = Hash[s[i]-'a']+1;
            //清空以前的记录
            len = 0;
            memset(Hash,-1,sizeof(int)*26);
            
        }
        
        //没有重复,则标记
        Hash[s[i]-'a'] = i;
        
        
    }
    return maxL > len ? maxL : len;
    
}

int main()
{
    printf("%d\n",lengthOfLongestSubstring("abcsdfdsfdsfdsf"));
    return 0;
}


