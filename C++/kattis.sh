function kattis() {
  if [[ -z $1 ]]; then
    printf "ERROR: kattis() requires filename input!\n Usage: kattis <newProjectName> [kattisDirectory]\n"
    return 1
  fi

  if [[ ! -z $2 ]]; then
    if [[ ! -d "$2" ]]; then
      printf "ERROR: Given argument (%s) is not a directory! Exiting...\n" "$2"
      return 1
    else
      if [[ ! -e "$2"/kattis-template.cpp ]]; then
        printf "ERROR: kattis-template.cpp not found in %s! Exiting...\n" "$2"
        return 1
      else
        kdirectory="$2"
      fi
    fi
  elif [[ ! -z $KATTIS ]]; then
    if [[ ! -d "$KATTIS" ]]; then
      printf ": KATTIS variable is set, but is not a directory! Moving on...\n"
    else
      if [[ ! -e "$KATTIS"/kattis-template.cpp ]]; then
        printf "ERROR: kattis-template.cpp not found in KATTIS directory, exiting!\n"
        return 1
      else
        kdirectory="$KATTIS"
      fi
    fi
  fi

  if [[ -z $kdirectory ]]; then # Assume current directory
    printf "WARN: KATTIS unset and no argument given, assuming pwd for kattis directory...\n"
    kdirectory="$(pwd)"
  fi

  # Now with error checking out of the way, time for the final move!
  if [[ "$1" == *cpp ]]; then
    cp -v "$kdirectory"/kattis-template.cpp "$kdirectory"/"$1"
  else
    cp -v "$kdirectory"/kattis-template.cpp "$kdirectory"/"$1".cpp
  fi

  return 0
}
