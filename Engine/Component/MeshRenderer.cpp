//
// Created by scion on 9/8/2022.
//

#include "Entity.h"
#include "MeshRenderer.h"

void MeshRenderer::OnLoad() {

}

void MeshRenderer::OnUpdate(double d) {

}

void MeshRenderer::OnRender(double d) {
    renderer.Draw(1);

}

void MeshRenderer::OnFree() {
    renderer.Free();
}

MeshRenderer::MeshRenderer(Entity* owner) : Component(owner, typeid(MeshRenderer).hash_code()), renderer(owner->Window()) {
}
