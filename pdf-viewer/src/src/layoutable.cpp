#include "layoutable.h"
#include "layout.h"

Layoutable::Layoutable():
  parentLayout_(nullptr)
{}

Layoutable::~Layoutable()
{
  if (parentLayout_)
    parentLayout_->removeLayoutable(this);
}

void Layoutable::setParentLayout(Layout *value)
{
  parentLayout_ = value;
}

Layout *Layoutable::parentLayout() const
{
  return parentLayout_;
}
