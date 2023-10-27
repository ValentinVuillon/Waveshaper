 

float mod (float a, float b){
    int q;
    if(a>=0){
        q = (int)a / b;
        return a-q*b;
    }
    
    if(a<0){
        float c=a;
        while(c<b){
            c=c+b;
        }
        q = (int)c / b;
        return c-q*b;
    }
}

float waveshaping_function(float sample){
    if(mod(0.25*(sample-1.0),1.0)>0.5){
        return 4*mod(0.25*(sample-1.0),1.0)-3.0;
    }else{
        return -4.0*mod(0.25*(sample+1.0),1.0)+3.0;
    }
}

