int  sum (int count,...) {

    int sum = 0;

    va_list args; /* Initialize the argument list. */

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, int); /* Get the next argument value. */
    }

    va_end(args); /* Clean up. */

    return sum;
}

int min(int count,...) {

    int min;

    va_list args;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            min = va_arg(args, int);
        }
        else
        {
            int tmp = va_arg(args, int);
            if (tmp < min)
            {
                min = tmp;
            }
        }
    }

    va_end(args);

    return min;
}

int max(int count,...) {


    int max;

    va_list args;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            max = va_arg(args, int);
        }
        else
        {
            int tmp = va_arg(args, int);
            if (tmp > max)
            {
                max = tmp;
            }
        }
    }

    va_end(args);

    return min;

}


