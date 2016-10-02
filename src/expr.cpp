#include "expr.h"

namespace taco {

VarNode::VarNode(Kind kind, const std::string& name) : kind(kind), name(name) {}

void VarNode::print(std::ostream& os) const {
  os << (kind == Kind::Reduction ? "+" : "") << name;
}

Var::Var(Kind kind, const std::string& name) : Var(new Node(kind, name)) {}

Var::Var(const std::string& name, Kind kind) : Var(kind, name) {}

Expr::Expr(int val) : Expr(Imm<int>(val)) {}

Expr::Expr(double val) : Expr(Imm<double>(val)) {}
  
}
