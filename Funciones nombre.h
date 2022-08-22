#ifndef FUNCIONES_NOMBRE_H_INCLUDED
#define FUNCIONES_NOMBRE_H_INCLUDED

int cargarPalabras(char n[15], int x)
{
  cin >> n;
  x = strlen(n);

  return x;
  }


void mostrarPalabras(char n[15], int x)
  {
  int i;
  for(i=0;i<=x;i++)
    {
    cout<<n[i];
    }
  }

  void dado1()
{   int lado=7;

    ///dado 1
    for (int i=0;i<lado;i++)
    {
    for (int j=0;j<lado;j++)
    {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if (i==3&&j==3)
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }cout<<endl;
    }
}
 void dado2 ()
 { int lado=7;
      for (int i=0;i<lado;i++)
    {
        for (int j=0;j<lado;j++)
        {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if ((i==5&&j==4)||(i==1&&j==2))
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }
        cout<<endl;
    }
 }
void dado3 ()
{
 ///dado 3
 int lado=7;
    for (int i=0;i<lado;i++)
    {
        for (int j=0;j<lado;j++)
        {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if ((i==1&&j==4)||(i==3&&j==3)||(i==5&&j==2))
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }
        cout<<endl;
    }
}
void dado4()
{
     ///dado 4
     int lado=7;
    for (int i=0;i<lado;i++)
    {
        for (int j=0;j<lado;j++)
        {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if ((i==1&&j==2)||(i==1&&j==4)||(i==5&&j==2)||(i==5&&j==4))
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }
        cout<<endl;
    }

}
void dado5()
{
///dado 5
int lado=7;
    for (int i=0;i<lado;i++)
    {
        for (int j=0;j<lado;j++)
        {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if ((i==1&&j==2)||(i==1&&j==4)||(i==5&&j==2)||(i==5&&j==4)||(i==3&&j==3))
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }
        cout<<endl;
    }
}
void dado6()
{
     ///dado 6
     int lado=7;
    for (int i=0;i<lado;i++)
    {
        for (int j=0;j<lado;j++)
        {
            if (i==0||j==0||i==lado-1||j==lado-1)
                {
                cout<<"X";
                }else
                {///
                    if ((i==1&&j==2)||(i==1&&j==4)||(i==5&&j==2)||(i==5&&j==4)||(i==3&&j==2)||(i==3&&j==4))
                    {
                        cout<<"*";
                    }else
                    {
                         cout<<" ";
                    }

                }
        }
        cout<<endl;
    }

}

#endif // FUNCIONES_NOMBRE_H_INCLUDED
