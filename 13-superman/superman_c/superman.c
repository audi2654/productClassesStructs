//C Struct for Superman

struct Superman
{

};

void showCharacteristics(const Superman* variable);
void setCharacteristics
(
    Superman* variableToSetValues,
    
);


int main(void)
{
    Superman* newSuperman = (struct Superman)ampMalloc(sizeof(struct Superman));

    newSuperman = &(struct Superman){
                                        .
                                        .

                                    }

    showCharacteristics(newSuperman);

    setCharacterictics
    (
        newSuperman
    );

    showCharacteristics(newSuperman);

    return 0;
}

//function definitions