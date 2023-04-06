class solution{
    public:
    int compress(vector<char>& chars){
        int i=0;
        int ansIndex=0;
        int n=chars.size();

        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //new element encountered or string traversing is finished
            chars[ansIndex]=chars[i]; //storing character
            ansIndex++;

            count=j-i; // no. of times the element is present (upar j=i+1 hai)
            if (count >1)
            {
                //converting counting into single digit and saving into answer
                string cnt=to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex]=ch;
                    ansIndex++;
                }
                i=j;
            }
            return ansIndex;

        }
    }
};