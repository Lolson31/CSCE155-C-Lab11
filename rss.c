#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "rss.h"

// TODO: implement these functions

Rss * createEmptyRss()
{
  return createRss("", "", "", "");
}

Rss * createRss(const char * title, const char * link, const char * date, const char * description)
{
  Rss *rss = (Rss *)malloc(sizeof(Rss) * 1);

  rss -> title = (char *)malloc(sizeof(char) * (strlen(title) + 1));
  strcpy(rss -> title, title);

  rss -> link = (char *)malloc(sizeof(char) * (strlen(link) + 1));
  strcpy(rss -> link, link);

  strptime(date, "%m/%d/%Y", &(rss -> date));

  rss -> description = (char *)malloc(sizeof(char) * (strlen(description) + 1));
  strcpy(rss -> description, description);

  return (rss);
}

void printRss(Rss * item)
{
  printf("%s\n", item);
}
