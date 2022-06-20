// Change two number through reference
void ChangeNumber(int& number1, int& number2){
    int& temp{number1};
    number1 = number2;
    number2 = number1;
}
