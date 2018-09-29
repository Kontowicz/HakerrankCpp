#pragma once

void bitset()
{
	    int n, s, p, q;
    std::cin>>n>>s>>p>>q;

    int first, second;
    first = s % int(pow(2,31));
    for(int i = 1; i< n; ++i)
    {
        second = first*p+q % int(pow(2,31));
        if(first == second)
        {
            std::cout<< --i<<"\n";
            return 0;
        }
        first = second;
    }
    std::cout<< n<< "\n";
    
    return 0;
}

