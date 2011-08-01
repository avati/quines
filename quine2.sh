#!/bin/sh
Q () { echo "#!/bin/sh"; echo "$@" | sed -r -e "s/(echo .)Q (..)/\1Q '\2'/" -e "s/([^(\\\\)])(\\\2)/\1'\2'/g"; echo "Q '$@'";}
Q 'Q () { echo "#!/bin/sh"; echo "$@" | sed -r -e "s/(echo .)Q (..)/\1Q \2/" -e "s/([^(\\\\)])(\\\2)/\1\2/g"; echo "Q $@";}'
