#!/usr/bin/env bash
q ()
{
    echo '#!/usr/bin/env bash';
    declare -f q;
    echo q
}
q
