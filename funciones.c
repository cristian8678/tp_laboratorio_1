float suma(float num1, float num2){
float resultado;
resultado=num1 + num2;
return resultado;
    }
float resta(float num1, float num2){
float resultado;
resultado=num1 - num2;
return resultado;
}

float multiplicar(float num1, float num2){
float resultado;
resultado=num1 * num2;
return resultado;
}

float dividir(float num1, float num2){
if(num2 !=0)
{float resultado;
resultado=num1 / num2;
return resultado;}
else{
    return 0.0;
}
}

float factorial(float num1){
    if(num1>0){
        float resultado=1;
        float i;
        for(i=num1;i>1;i--)
        {
            resultado=resultado* i;
        }
        return resultado;
    }  else{
    return 0;
    }
}
