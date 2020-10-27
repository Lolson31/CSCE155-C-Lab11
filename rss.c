#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

  rss -> date = (char *)malloc(sizeof(char) * (strlen(date) + 1));
  strcpy(rss -> date, date);

  rss -> description = (char *)malloc(sizeof(char) * (strlen(description) + 1));
  strcpy(rss -> description, description);

  return (rss);
}

void printRss(Rss * item)
{
  printf("Title: %s\n\n Link: %s\n\n Date: %s\n\n Desc: %s\n\n", item -> title, item -> link, item -> date, item -> description);
}
