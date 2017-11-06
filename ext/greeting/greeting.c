# include <ruby.h>
# include <stdio.h>

VALUE cGreeting;

void Init_greeting(void);
VALUE fgreeting_morning(VALUE self);
VALUE fgreeting_afternoon(VALUE self);
VALUE fgreeting_evening(VALUE self);

void
Init_greeting(void)
{
  VALUE cGreeting = rb_define_class("Greeting", rb_cObject);
  rb_define_singleton_method(cGreeting, "morning", RUBY_METHOD_FUNC(fgreeting_morning), 0);
  rb_define_singleton_method(cGreeting, "afternoon", RUBY_METHOD_FUNC(fgreeting_afternoon), 0);
  rb_define_singleton_method(cGreeting, "evening", RUBY_METHOD_FUNC(fgreeting_evening), 0);
}

VALUE
fgreeting_morning(VALUE self)
{
  puts("Good morning!");
  return(self);
}

VALUE
fgreeting_afternoon(VALUE self)
{
  puts("Good afternoon!");
  return(self);
}

VALUE
fgreeting_evening(VALUE self)
{
  puts("Good evening!");
  return(self);
}
